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
    bool isBalanced(TreeNode* root) {
        return sol(root)!=-1;
        }
    int sol(TreeNode* root)
    {
       if(root==NULL) return 0;
        int left=sol(root->left);
        if(left==-1) return -1;
        int right=sol(root->right);
         if(right==-1) return -1;
if(abs(left-right)>1) return -1;
        else return 1+max(left,right);
    }
};
