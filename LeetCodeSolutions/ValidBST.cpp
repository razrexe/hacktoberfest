class Solution {
public:
    bool isValidBST(TreeNode* root)
    {
        return isValid(root, NULL, NULL);
    }
    
    bool isValid(TreeNode* root, int* lower, int* upper)
    {
        if(!root)
            return true;
        if(upper && root -> val >= *upper)
            return false;
        if(lower && root -> val <= *lower)
            return false;
        
        return 
            isValid(root -> left, lower, &(root -> val)) && isValid(root -> right, &(root -> val), upper);
    }
};
