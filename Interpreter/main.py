# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.

from Scanner import Scanner
from console import Console

if __name__ == '__main__':
    scanner = Scanner()

    scanner.runScanner("p1.txt")

    scanner.runScanner("p2.txt")

    scanner.runScanner("p3.txt")

    # scanner.runScanner("p1err.txt")

    # Finite automata console
    # console = Console()
    # console.run()

