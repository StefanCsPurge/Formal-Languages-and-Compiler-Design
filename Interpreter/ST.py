from collections import deque
"""
# Symbol Table: use hash table with linked list at each key
# a. unique for identifiers and constants (create one instance of  ST)
# Hash function: Sum of ASCII codes of chars
"""


class SymbolTable:
    def __init__(self, size):
        self.elements = [deque() for _ in range(size)]
        self.size = size

    def hash(self, element):  # Sum of ASCII codes of chars
        s = 0
        if isinstance(element, int):
            element = str(element)
        for ch in element:
            s += ord(ch)
        return s % self.size

    def contains(self, element):
        return element in self.elements[self.hash(element)]

    def getPosition(self, element):
        listPos = self.hash(element)
        listIdx = 0
        for el in self.elements[listPos]:
            if el == element:
                break
            listIdx += 1
        return listPos, listIdx

    def add(self, element):
        if self.contains(element):
            return self.getPosition(element)
        self.elements[self.hash(element)].append(element)
        return self.getPosition(element)

    def remove(self, element):
        self.elements[self.hash(element)].remove(element)

    def __str__(self):
        output = "Symbol Table (based on Hash Table)\n"
        for i in range(self.size):
            output += str(i) + " -> " + str(self.elements[i]) + "\n"
        return output


