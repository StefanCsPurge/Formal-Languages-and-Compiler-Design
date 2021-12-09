class TableEntry:
    def __init__(self):
        self.stateIndex = 0
        self.action = ''
        self.reduceNonTerminal = ''
        # RHS to reduce
        self.reduceRHS = ""
        # Array of tuples (string, int)
        self.shifts = []

    def reduceProductionString(self):
        return self.reduceNonTerminal + " -> " + self.reduceRHS

    def __str__(self):
        return 'Table Entry:\n' \
               + 'state index: ' + str(self.stateIndex) + '\n' \
               + 'action: ' + self.action + '\n' \
               + 'reduce Non Terminal: ' + self.reduceNonTerminal + '\n' \
               + 'reduce RHS: ' + self.reduceRHS + '\n' \
               + 'shifts: ' + str(self.shifts) + '\n'
