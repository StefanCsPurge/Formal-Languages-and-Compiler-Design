# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.
import traceback

from Parser import Parser
from Scanner import Scanner
from console import Console
from Grammar import Grammar
from ast import literal_eval as make_tuple


def readSequence(pif_file):
    sequence = ""
    with open(pif_file, 'r') as fin:
        for line in fin.readlines():
            my_tuple = make_tuple(line)
            sequence += my_tuple[0] + " "
    return sequence.strip()


def printCanonicalCollection(col):
    print("Canonical collection:")
    ### This is a COMMENT made by Ana-Doris Moisuc & Andrei-Ovidiu Muntean
    # Try looking into enumerate
    # A more pythonic way of achieving the same result would be
    # for i, col_items in enumerate(col):
    ###
    for i in range(len(col)):
        print(f"State {i}: ", end="")
        for item in col[i]:
            print(Parser.LR0ItemStr(item), end=" ")
        print()
    print()


def evaluateG1():
    gr = Grammar("IO_files/g1.txt")
    # print(gr)
    # print("CFG check:", gr.CFG_check(), "\n")
    # gr.print_productions_for_nonTerminal('term')
    try:
        parser = Parser(gr)
        canCol = parser.CanonicalCollection()
        # printCanonicalCollection(canCol)

        seq = open("IO_files/seq.txt", "r").readline().strip()
        parser.parseSequence(seq, "out1.txt")

    except Exception as e:
        # traceback.print_exc()
        print(e)


def evaluateG2():
    gr = Grammar("IO_files/g2.txt")
    try:
        parser = Parser(gr)
        canCol = parser.CanonicalCollection()
        # printCanonicalCollection(canCol)

        g2Seq = readSequence("IO_files/PIF.out").split()
        print(g2Seq)
        parser.parseSequence(g2Seq, "out1.txt")

    except Exception as e:
        # traceback.print_exc()
        print(e)


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

    # evaluateG1()
    evaluateG2()



