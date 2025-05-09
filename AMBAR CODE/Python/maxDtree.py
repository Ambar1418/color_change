class TreeNode:
    def __init__(self, value=0, left=None, right=None):
        self.value = value
        self.left = left
        self.right = right

def maxDepth(root):
    if root is None:
        return -1  
    else:
        left_depth = maxDepth(root.left)
        right_depth = maxDepth(root.right)
        return max(left_depth, right_depth)+1
    
root = TreeNode(3)
root.left = TreeNode(2)
root.right = TreeNode(20)
root.right.right= TreeNode(14)
root.right.right=TreeNode(23)
print("Maximum Depth:", maxDepth(root)) 