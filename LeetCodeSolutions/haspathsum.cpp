class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
            return false;
        targetSum=targetSum-root->val;
        if(targetSum==0 && !root->left && !root->right)
            return true;
        
        return hasPathSum(root->left, targetSum)|| hasPathSum(root->right,targetSum);
        
    }
};
