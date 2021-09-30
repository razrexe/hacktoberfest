class Node:

    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
 

def Height_of_tree(node):

    if node is None:
        return 0 ;
 
    else :
 
        # Compute the depth of each subtree
        return max(Height_of_tree(node.left), Height_of_tree(node.right)) + 1
 
 
# Driver program to test above function
root = Node(10)
root.left = Node(20)
root.right = Node(30)
root.left.left = Node(40)
root.left.right = Node(50)
 
 
print ("Height of tree is %d" %(Height_of_tree(root)))