class TableEntry:
    def __init__(self):
        self.stateIndex = 0
        self.action = ''
        self.reduceNonTerminal = ''
        # Array of strings
        self.reduceContent = []
        # Array of tuples (string, int)
        self.shifts = []

    def __str__(self):
        return 'Table Entry:\n' \
               + 'state index: ' + str(self.stateIndex) + '\n' \
               + 'action: ' + self.action + '\n' \
               + 'reduce Non Terminal: ' + self.reduceNonTerminal + '\n' \
               + 'reduce Content: ' + str(self.reduceContent) + '\n' \
               + 'shifts: ' + str(self.shifts) + '\n'
