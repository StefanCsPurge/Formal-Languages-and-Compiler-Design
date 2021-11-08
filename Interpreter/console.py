from FiniteAutomata import FiniteAutomata


class Console:
    def __init__(self):
        self.FA = FiniteAutomata("FA.in")

    @staticmethod
    def showMenu():
        print("Finite Automata options:")
        print("1. Display the set of states")
        print("2. Display the alphabet")
        print("3. Display all the transitions")
        print("4. Display the set of final states")
        print("5. Verify if a sequence is accepted by the FA")

    def run(self):
        options = {
            '1': self.showFAStates,
            '2': self.showFAAlphabet,
            '3': self.showFATransitions,
            '4': self.showFAFinalStates,
            '5': self.verifySequence,
        }
        quit_console = False
        while not quit_console:
            self.showMenu()
            option = input("> ").strip()
            if option in options.keys():
                options[option]()
            elif option == "quit" or option == "exit":
                quit_console = True

    def showFAStates(self):
        print(self.FA.Q)

    def showFAAlphabet(self):
        print(self.FA.E)

    def showFATransitions(self):
        for t in self.FA.Tr:
            print("({},{}) -> {}".format(t[0],t[1],t[2]))

    def showFAFinalStates(self):
        print(self.FA.F)

    def verifySequence(self):
        seq = input("Enter sequence: ")
        if self.FA.isSequenceAccepted(seq):
            print("Sequence accepted")
        else:
            print("Sequence not accepted")
