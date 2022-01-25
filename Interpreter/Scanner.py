from ST import SymbolTable
from FiniteAutomata import FiniteAutomata
import re


class Scanner:
    def __init__(self):
        self.keywords = []
        self.separators = []
        self.operators = []
        self.readTokens()
        self.PIF = []
        self.ST = SymbolTable(22)
        # use FA instead of regex
        self.identifierFA = FiniteAutomata("IO_files/FA-identifier.in")
        self.intConstantFA = FiniteAutomata("IO_files/FA-int-constant.in")

    def readTokens(self):
        with open("IO_files/token.in", "r") as f:
            ### This is a COMMENT made by Ana-Doris Moisuc & Andrei-Ovidiu Muntean
            # Try to avoid magic numbers in your code. Remove (15, 10, 14, 22 a.s.o.)
            ###
            for _ in range(15):  # we have 15 operators
                operator = f.readline().strip()
                self.operators.append(operator)

            for _ in range(10):
                separator = f.readline().strip()
                if separator == "space":
                    separator = " "
                elif separator == "newline":
                    separator = "\n"
                self.separators.append(separator)

            for _ in range(14):
                keyword = f.readline().strip()
                self.keywords.append(keyword)

    def addToPIF(self, token, position):
        self.PIF.append((token, position))

    def printTokens(self):
        print(self.operators)
        print(self.separators)
        print(self.keywords)

    def tokenizeSpacelessChunk(self, c):
        tokens = []
        the_separators = self.separators + self.operators
        temp_exception = None
        while len(c) > 0:
            sep = None
            min_idx = len(c)
            for ch in the_separators:
                if ch != temp_exception:
                    idx = c.find(ch)
                    if idx != -1 and idx < min_idx:
                        sep = ch
                        min_idx = idx
            temp_exception = None
            if sep is None:
                break
            if self.isIdentifier(c[:min_idx+len(sep)]):
                temp_exception = sep
                continue
            if len(c[:min_idx]) > 0:
                tokens.append(c[:min_idx])
            tokens.append(sep)
            c = c[min_idx+len(sep):]

        if len(c) > 0:
            tokens.append(c)
        return tokens

    def tokenizeLine(self, line):
        # line = re.sub(' +', ' ', line)  # remove multiple spaces
        comment_pos = line.find("//")
        if comment_pos != -1:
            line = line[:comment_pos]
        initial_tokens = line.split()
        tokens = []
        temp_str = None
        for t in initial_tokens:
            if temp_str is None and (t in self.keywords or t in self.operators or
                                     t in self.separators or self.isConstant(t) or self.isIdentifier(t)):
                tokens.append(t)
                continue
            if t[0] == "\"" and temp_str is None:  # reconstruct string that contains whitespace
                temp_str = t + " "
            elif t[-1] == "\"" and temp_str is not None:
                temp_str += t
                tokens.append(temp_str)
                temp_str = None
            elif temp_str is not None:
                temp_str += t + " "
            else:
                tokens.extend(self.tokenizeSpacelessChunk(t))

        if temp_str is not None:
            tokens.append(temp_str)
        return tokens

    def runScanner(self, programFile):
        # run lexical analyzer
        with open(programFile, "r") as f:
            lineNo = 0
            correct = True
            for line in f:
                lineNo += 1
                line = line.strip()
                if line.startswith("//") or len(line) == 0:
                    continue
                tokens = self.tokenizeLine(line)

                # now apply the proper algorithm for tokens
                for token in tokens:
                    if token in self.keywords+self.operators+self.separators:
                        self.addToPIF(token,(-1,-1))
                    elif self.identifierFA.isSequenceAccepted(token):   # self.isIdentifier(token):
                        index = self.ST.add(token)
                        self.addToPIF("identifier", index)
                    elif self.intConstantFA.isSequenceAccepted(token) \
                            or self.isCharOrStringConstant(token):   # self.isConstant(token):
                        index = self.ST.add(token)
                        self.addToPIF("constant", index)
                    else:
                        print(f"Lexical ERROR on line {lineNo}: {token}")
                        correct = False
            if correct:
                print("Lexically correct.")

            with open("IO_files/ST.out", "w") as st_file:
                st_file.write(str(self.ST))

            with open("IO_files/PIF.out", "w") as pif_file:
                for el in self.PIF:
                    pif_file.write(str(el)+"\n")

    @staticmethod
    def isConstant(token):
        return re.match(r'^(0|[+-]?[1-9][0-9]*)$|^\'.\'$|^\".*\"$', token) is not None

    @staticmethod
    def isCharOrStringConstant(token):
        return re.match(r'^\'.\'$|^\".*\"$', token) is not None

    @staticmethod
    def isIdentifier(token):
        return re.match(r'^_*[a-z](_|[a-zA-Z])*[0-9]*$', token) is not None
