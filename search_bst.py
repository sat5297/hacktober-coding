class Solution:
    def searchBST(self, root: TreeNode, val: int) -> TreeNode:
        if root.val==val:
            return root
        elif root.val>val and root.left!=None:
            return self.searchBST(root.left,val)
        elif root.val<val and root.right!=None:
            return self.searchBST(root.right,val)
