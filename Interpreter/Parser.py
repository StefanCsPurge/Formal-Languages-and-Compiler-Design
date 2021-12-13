from copy import deepcopy

from ParserOutput import ParserOutput
from TableEntry import TableEntry
'''
LR0 Item [A -> alpha.beta] is a tuple (A, alpha, ., beta)
'''


class Parser:
    def __init__(self, grammar):
        self.grammar = grammar  # enriched grammar
        self.table = []
        self.buildLR0Table()

    def closure(self, itemCollection: set):
        C = deepcopy(itemCollection)  # set
        finished = False
        while not finished:  # while C does modify
            finished = True
            for item in C:
                # alpha = item[1]  # prefix
                beta = item[3]
                if len(beta) == 0:
                    continue
                B = beta.split()[0]
                if B in self.grammar.terminals:
                    continue
                for prod in self.grammar.get_productions_for_nonTerminal(B):
                    theItem = (B, '', '.', prod)
                    if theItem not in C:
                        C.add(theItem)
                        finished = False
                if not finished:
                    break
        return C

    def goto(self, state: set, X: str):
        stateSet = set()
        for item in state:
            beta = item[3]
            if len(beta) > 0 and beta.split()[0] == X:  # if beta contains X on the first pos
                newItem = (item[0], item[1] + ' ' + X, '.', item[3][len(X)+1:])   # remove X from beta
                stateSet.add(newItem)
        return self.closure(stateSet)

    def CanonicalCollection(self):
        C = []
        s0 = self.closure( { ('S^','','.',self.grammar.starting) } )  # enriched grammar S^
        C.append(s0)   # add initial state to the collection
        finished = False
        while not finished:
            finished = True
            for state in C:
                for X in self.grammar.terminals + self.grammar.nonTerminals:
                    nextState = self.goto(state, X)
                    if len(nextState) > 0 and nextState not in C:
                        finished = False
                        C.append(nextState)
                if not finished:
                    break
        return C

    def buildLR0Table(self):
        canonicalCollection = self.CanonicalCollection()
        self.printCanonicalCollection(canonicalCollection)

        idx = 0
        for state in canonicalCollection:
            entry = TableEntry()
            entry.stateIndex = idx

            action = ""
            for item in state:
                if len(item[3]) != 0:  # len(beta) != 0 -> dot is not last
                    action = "shift"
                    break
            if action == "":
                for item in state:
                    if item[0] == 'S^' and len(item[3]) == 0:
                        action = "accept"
                        break
            if action == "":
                for item in state:
                    if len(item[3]) == 0:  # dot is last
                        entry.reduceNonTerminal = item[0]  # NON terminal
                        entry.reduceRHS = item[1]  # alpha
                        action = "reduce " + self.LR0ItemStr(item,True)
                        break

            if action == "":
                action = "error"

            self.checkConflicts(state,idx)  # check grammar for LR(0) conflicts
            entry.action = action

            for X in self.grammar.terminals + self.grammar.nonTerminals:
                nextState = self.goto(state,X)
                if len(nextState) > 0:
                    nextStateIndex = canonicalCollection.index(nextState)
                    entry.shifts.append((X,nextStateIndex))   # goTos

            self.table.append(entry)

            # print(self.table[idx])
            idx += 1

    def parse(self, inputStack: list, outFile):
        workingStack = []
        outputStack = []
        outputNumberStack = []
        finished = False

        lastSymbol = ""
        stateIndex = 0
        workingStack.append((lastSymbol,stateIndex))

        try:
            while not finished:
                entry: TableEntry = self.table[stateIndex]

                if entry.action == "shift":
                    c = inputStack.pop()
                    goto = None
                    for shift in entry.shifts:
                        if shift[0] == c:
                            goto = shift
                            break
                    stateIndex = goto[1]
                    lastSymbol = c
                    workingStack.append((lastSymbol,stateIndex))

                elif entry.action == "reduce " + entry.reduceProductionString():
                    RHS_list = entry.reduceRHS.split()
                    while workingStack[-1][0] in RHS_list and len(workingStack) > 0:
                        RHS_list.remove(workingStack[-1][0])
                        workingStack.pop()
                    goto = None
                    for shift in self.table[workingStack[-1][1]].shifts:
                        if shift[0] == entry.reduceNonTerminal:
                            goto = shift
                            break
                    stateIndex = goto[1]
                    lastSymbol = entry.reduceNonTerminal
                    workingStack.append((lastSymbol,stateIndex))
                    outputStack.append(entry.reduceProductionString())
                    productionNumber = None
                    for p in self.grammar.productions[entry.reduceNonTerminal]:
                        if p[0] == entry.reduceRHS.strip():
                            productionNumber = p[1]
                            break
                    outputNumberStack.append(productionNumber)

                elif entry.action == "accept":
                    output = outputStack[::-1]
                    numberOutput = outputNumberStack[::-1]

                    print("Sequence accepted")
                    print("Productions string: " + str(output))
                    print("Productions order: " + str(numberOutput))

                    # Construct output tree with outputNumberStack and the Grammar
                    outputTree = ParserOutput(outputNumberStack, self.grammar)
                    print("\nOutput table:")
                    outputTree.printTree(outputTree.root)

                    # Save the tree in an output file (parsing_tree_table.out)
                    with open(f'IO_files/{outFile}', 'w') as out_file:
                        outNodes = outputTree.getOutNodes(outputTree.root)
                        for node in outNodes:
                            out_file.write(str(node) + '\n')
                        out_file.close()
                    print('Tree saved successfully !\n')

                    finished = True

                elif entry.action == "error":
                    print("ERROR at state: " + str(stateIndex))
                    finished = True

        except Exception as _:
            raise Exception("ERROR at state " + str(stateIndex) + " after symbol " + lastSymbol)

    def parseSequence(self, sequence, outFile):
        if type(sequence) == str:
            inputStack = list(sequence[::-1])
        else:
            inputStack = sequence[::-1]
        print(inputStack)
        self.parse(inputStack, outFile)

    def checkConflicts(self, state, index):
        count_dotLast = 0
        count_dotMiddle = 0
        # Count for dot on final position
        for it in state:
            if len(it[3]) == 0:
                count_dotLast += 1
        # Count for dot on middle position
        for it in state:
            if not len(it[3]) == 0:
                count_dotMiddle += 1
        if count_dotLast > 1:
            raise Exception(f"REDUCE - REDUCE conflict for state {index} \n" + self.stateStr(state) +
                            "\n\nThe given grammar is not LR(0)")
        if count_dotLast == 1 and count_dotMiddle > 0:
            raise Exception(f"SHIFT - REDUCE conflict for state {index} \n" + self.stateStr(state) +
                            "\n\nThe given grammar is not LR(0)")

    @staticmethod
    def LR0ItemStr(item, production = False):
        if production:
            return "{} -> {}{}".format(item[0], item[1], item[3])
        return "[{} -> {}{}{}]".format(item[0],item[1].replace(" ", ""), item[2], item[3].replace(" ", ""))

    @staticmethod
    def stateStr(state):
        the_str = "{ "
        for it in state:
            the_str += Parser.LR0ItemStr(it) + " "
        the_str += "}"
        return the_str

    @staticmethod
    def printCanonicalCollection(col):
        print("Canonical collection:")
        for i in range(len(col)):
            print(f"State {i}: ", end="")
            for item in col[i]:
                print(Parser.LR0ItemStr(item), end=" ")
            print()
        print()
