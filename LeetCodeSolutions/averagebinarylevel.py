class Solution:
  def averageOfLevels(self, root: TreeNode) -> List[float]:
    result = []
    level = (root,)
    while level:
      result.append(sum(node.val for node in level) / len(level))
      level = tuple(leaf for node in level for leaf in (node.left, node.right) if leaf)
      
    return result
