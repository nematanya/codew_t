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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)
        {
             TreeNode* n=new TreeNode(val);
         return n;
        }
       TreeNode* curr=root;
        while(curr)
        {
        if(curr->val>val){
        if(curr->left)curr=curr->left;
            else
            {
                TreeNode* n=new TreeNode(val);
                curr->left=n;
         break;
            }
        }
        else {
            if(curr->right)
                curr=curr->right;
            else{
                 TreeNode* n=new TreeNode(val);
                curr->right=n;
         break;
            }
             }
        }
        return root;
        
    }
};