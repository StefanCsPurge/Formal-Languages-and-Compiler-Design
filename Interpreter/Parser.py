# closure primeste o multime
# se uita daca am punct in fata unui non-terminal
from copy import deepcopy

from TableEntry import TableEntry
'''
LR0 Item [A -> alpha.beta] is a tuple (A, alpha, ., beta)
'''


class Parser:
    def __init__(self, grammar):
        self.grammar = grammar  # enriched grammar
        self.table = []
        self.buildLR0Table()

    def closure(self, itemCollection):
        C = itemCollection  # set
        finished = False
        while not finished:  # while C does modify
            finished = True
            for item in itemCollection:
                alpha = item[1]  # prefix
                beta = item[3]
                if len(beta) == 0:
                    continue
                B = beta.split()[0]
                if B in self.grammar.terminals:
                    continue
                for prod in self.grammar.get_productions_for_nonTerminal(B):
                    theItem = (B, '', '.', prod)
                    if theItem not in C:
                        C.append(theItem)
                        finished = False
        return C

    def goto(self, state, X):
        stateSet = set()
        for item in state:
            if item[3].split()[0] == X:  # if beta contains X on the first pos
                newItem = (item[0], item[1] + ' ' + X, '.', item[3][2:])   # remove X from beta
                stateSet.add(newItem)
        return self.closure(stateSet)

    def CanonicalCollection(self):
        C = set()
        s0 = self.closure({('S^', '', '.', 'S')})  # enriched grammar S^
        C.add(s0)
        finished = False
        while not finished:
            finished = True
            for state in C:
                for X in self.grammar.terminals + self.grammar.nonTerminals:
                    nextState = self.goto(state, X)
                    if len(nextState) and nextState not in C:
                        finished = False
                        C.add(nextState)
        return C

    def buildLR0Table(self):
        canonicalCollection = self.CanonicalCollection()
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
                        entry.reduceContent = item
                        action = "reduce"

            if action == "":
                action = "error"

            entry.action = action

    @staticmethod
    def checkConflicts(state):
        count_dotLast = 0
        count_dotMiddle = 0
        # Count for dot on final position
        for s in state:
            if len(s[3]) == 0:
                count_dotLast += 1
        # Count for dot on middle position
        for s in state:
            if len(s[2]) == 0:
                count_dotMiddle += 1
        if count_dotLast > 1:
            raise Exception("REDUCE - REDUCE conflict for state \n" + state + "\n\nThe given grammar is not LR(0)!")
        if count_dotLast == 1 and count_dotMiddle > 0:
            raise Exception("SHIFT - REDUCE conflict for state \n" + state + "\n\nThe given grammar is not LR(0)!")
