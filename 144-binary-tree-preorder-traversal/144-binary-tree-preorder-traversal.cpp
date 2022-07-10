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

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> t;
     sol(root,t);
        return t;
    }
       void sol(TreeNode* root,vector<int>& t)
    {
          if(!root)
            return ;
        t.push_back(root->val);
        sol(root->left,t);
        sol(root->right,t);
        
    }
};