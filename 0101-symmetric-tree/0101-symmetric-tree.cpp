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
    bool sol(TreeNode* p,TreeNode* q)
    {
        if(p==NULL or q==NULL)
            return p==q;
        else if(p->val!=q->val)
                return false;
        else return sol(p->left,q->right) and sol(p->right,q->left);
            
    }
    bool isSymmetric(TreeNode* root) {
       if(root==NULL) return true;
        else return sol(root->left,root->right);
    }
};