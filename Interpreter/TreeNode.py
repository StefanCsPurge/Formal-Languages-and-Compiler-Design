
class TreeNode:
    def __init__(self,info):
        self.index = 0
        self.info = info
        self.parent = None
        ### This is a COMMENT made by Ana-Doris Moisuc & Andrei-Ovidiu Muntean
        # Please specify that leftSibling and leftChild are of type TreeNode
        # because some may mistake them for indexes
        ###
        self.leftSibling = None
        self.leftChild = None
        self.level = 0

    def __str__(self):
        return "TreeNode: " + \
               "index =" + str(self.index).rjust(4) + \
               "   | info =" + self.info.rjust(4) + ' ' + \
               "   | parent =" + str(self.parent.index if self.parent is not None else -1).rjust(4) + \
               "   | rightSibling =" + str(self.leftSibling.index if self.leftSibling is not None else -1).rjust(4) + \
               "   | leftChild =" + str(self.leftChild.index if self.leftChild is not None else -1).rjust(4) + \
               "   | level =" + str(self.level).rjust(4)


