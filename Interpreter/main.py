# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.
import traceback

from Parser import Parser
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

    gr = Grammar("IO_files/g1.txt")
    # print(gr)
    # print("CFG check:", gr.CFG_check(), "\n")
    # gr.print_productions_for_nonTerminal('term')

    try:
        parser = Parser(gr)
        canCol = parser.CanonicalCollection()

        # print("Canonical collection:")
        # for i in range(len(canCol)):
        #     print(f"State {i}: ",end="")
        #     for item in canCol[i]:
        #         print(Parser.LR0ItemStr(item), end=" ")
        #     print()
        # print()

        parser.parseSequence("(x)")
    except Exception as e:
        # traceback.print_exc()
        print(e)



