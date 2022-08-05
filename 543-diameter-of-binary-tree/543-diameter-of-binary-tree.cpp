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
    int diameterOfBinaryTree(TreeNode* root) {
        int dia=0;
        sol(root,dia);
        return dia;
    }
    int sol(TreeNode* root,int &dia)
    {
           if(root==NULL)
            return 0;
        int lh=sol(root->left,dia);
        int rh=sol(root->right,dia);
        dia=max(dia,lh+rh);
        return (max(lh,rh)+1);
    }
   
};