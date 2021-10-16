/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
typedef long long ll;
class Solution {
public:
    int solve(TreeNode* root, ll num){
        if(!root)
            return 0;
        if(!root->left && !root->right)
            return num + root->val;
        num += root->val;
        return solve(root->left, num * 2) + solve(root->right, num * 2);
    }
    int sumRootToLeaf(TreeNode* root) {
        return solve(root,0);
    }
};
