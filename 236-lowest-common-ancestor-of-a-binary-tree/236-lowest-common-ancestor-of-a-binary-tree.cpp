/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
                if(root == p or root == q) return root;
        if(!root) return NULL;
        auto a = lowestCommonAncestor(root->left, p, q);
        auto b = lowestCommonAncestor(root->right, p, q);
        if(!a) return b;
        if(!b) return a;
        return root;

    }
};