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
    void sol(TreeNode* root,int& res)
    { if(root==NULL) return ;
        if(root->left!=NULL and root->left->left==NULL and root->left->right==NULL) 
            res+=root->left->val;
         sol(root->left,res);
        sol(root->right,res);
    }
    int sumOfLeftLeaves(TreeNode* root) {
    int res=0;
    sol(root,res);
        return res;
    }
};