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
class Solution {
public:
    int sol(TreeNode* root,int& maxpath)
    {
        if(!root)
            return 0;
        int lh=max(0,sol(root->left,maxpath));
        int rh=max(0,sol(root->right,maxpath));
        maxpath=max(maxpath,root->val+lh+rh);
        return max(lh,rh)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxpath=INT_MIN;
        sol(root,maxpath);
        return maxpath;
    }
};