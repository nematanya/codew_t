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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        else
         return    is(root->left,root->right);
    }
   bool is(TreeNode* p,TreeNode* q)
   {
       if(p==NULL or q==NULL)
           return (p==q);
       else
           if(p->val!=q->val) return false;
        return is(p->left,q->right) and is(p->right,q->left);
           
   }
};