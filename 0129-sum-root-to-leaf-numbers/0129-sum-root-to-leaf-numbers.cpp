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
    vector<int>res;
    void pre(TreeNode* root,vector<int>&t)
    {    if(root==NULL)return;
      t.push_back(root->val);
        if(root->left==NULL and root->right==NULL)
        {
            // reverse(t.begin(),t.end());
            int temp=0;
            for(auto it:t)
            {
                temp=10*temp+it;
            }
            res.push_back(temp);
        }
        pre(root->left,t);
        pre(root->right,t);
        t.pop_back();
    }
    int sumNumbers(TreeNode* root) {
       vector<int>t;
        pre(root,t);
        int ans=0;
        for(auto it:res){cout<<it;
            ans+=it;}
        return ans;
        
    }
};