class Solution
{
public:
int minDepth(TreeNode* root) 
{
        if(root == NULL)
            return 0;
        
        if(root->left == NULL && root->right == NULL)
            return 1;
        
        else if( root->left != NULL && root->right == NULL)
            return minDepth(root->left) + 1;
        
        else if( root->left == NULL && root->right != NULL )
            return minDepth(root->right) + 1;
        
        else
            return min(minDepth(root->left),minDepth(root->right)) + 1;
        
    }
}
