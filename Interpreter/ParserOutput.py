# parsing tree
from Grammar import Grammar
from TreeNode import TreeNode


class ParserOutput:
    def __init__(self, inputSequence: list, grammar: Grammar):
        self.root = None
        self.createTreeFromSequence(inputSequence,grammar)
        self.outNodes = []

    def getOutNodes(self, node: TreeNode):
        self.getTreeNodes(node)
        return self.outNodes

    def createTreeFromSequence(self, inputSequence, grammar):
        lastParent = None
        level = 0
        index = 0

        while len(inputSequence) > 0:
            productionIndex = inputSequence.pop()
            productionTuple = grammar.getProduction(productionIndex)  # lhs -> rhs

            if productionIndex == 1 and self.root is None:
                self.root = TreeNode(productionTuple[0])
                self.root.index = index
                self.root.level = level
                index += 1
                level += 1
                lastParent = self.root

            for s in productionTuple[1].split():
                node = self.addChild(lastParent, s, index, level)
                if len(inputSequence) > 0:
                    nextProductionTuple = grammar.getProduction(inputSequence[-1])
                    if s == nextProductionTuple[0]:
                        lastParent = node
                index += 1
            level += 1

    def addChild(self, node: TreeNode, info, index, level):
        if node is None:
            return None

        if node.leftChild is None:
            newChild = TreeNode(info)
            newChild.level = level
            newChild.index = index
            newChild.parent = node

            node.leftChild = newChild
            return node.leftChild

        return self.addSibling(node.leftChild, info, index, level)

    @staticmethod
    def addSibling(node: TreeNode, info, index, level):
        if node is None:
            return None

        while node.leftSibling is not None:
            node = node.leftSibling

        newSibling = TreeNode(info)
        newSibling.level = level
        newSibling.index = index
        newSibling.parent = node.parent

        node.leftSibling = newSibling
        return node.leftSibling

    def printTree(self, node: TreeNode):
        if node is None:
            return

        while node is not None:
            print(node)
            if node.leftChild is not None:
                self.printTree(node.leftChild)
            node = node.leftSibling

    def getTreeNodes(self, node: TreeNode):
        if node is None:
            return

        while node is not None:
            self.outNodes.append(str(node))
            if node.leftChild is not None:
                self.getTreeNodes(node.leftChild)
            node = node.leftSibling
