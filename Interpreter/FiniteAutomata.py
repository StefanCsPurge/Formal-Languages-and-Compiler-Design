
class FiniteAutomata:

    def __init__(self, inputFile):
        self.inputFile = inputFile
        self.Q = []   # all states
        self.E = []   # alphabet
        self.q0 = None   # initial state
        self.F = []   # final states
        self.Tr = []   # transitions
        self.readFA_fromFile()

    def readFA_fromFile(self):
        with open(self.inputFile) as file:
            self.Q = file.readline().strip().split()[2:]
            self.E = file.readline().strip().split()[2:]
            self.q0 = file.readline().strip().split()[2]
            self.F = file.readline().strip().split()[2:]
            file.readline()  # Tr =
            for line in file:
                sourceState = line.strip().split("->")[0].strip().split(',')[0].replace('(','')
                terminalSymbol = line.strip().split("->")[0].strip().split(',')[1].replace(')','')
                destinationState = line.strip().split("->")[1].strip()
                self.Tr.append((sourceState,terminalSymbol,destinationState))

    def isSequenceAccepted(self, sequence):
        currentState = self.q0
        for symbol in sequence:
            ok = False
            for transition in self.Tr:
                if transition[0] == currentState and transition[1] == symbol:
                    ok = True
                    currentState = transition[2]
                    break
            if not ok:
                return False
        return currentState in self.F
