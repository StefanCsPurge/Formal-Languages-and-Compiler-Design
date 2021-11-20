# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.

from Scanner import Scanner
from console import Console
from Grammar import Grammar

if __name__ == '__main__':
    scanner = Scanner()

    # scanner.runScanner("programs/p1.txt")
    #
    # scanner.runScanner("programs/p2.txt")
    #
    # scanner.runScanner("programs/p3.txt")

    # scanner.runScanner("programs/p1err.txt")

    # Finite automata console
    console = Console()
    # console.run()

    gr = Grammar("IO_files/g2.txt")
    print(gr)
    print("CFG check:",gr.CFG_check())
    gr.productions_for_nonTerminal('term')



