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
    void sol(TreeNode* root,bool flag,int res,int& ans)
    {  
        if(root==NULL) return;
        ans=max(ans,res);
        if(flag==1)
        {
            sol(root->right,0,res+1,ans);
            sol(root->left,1,1,ans);
        }
        else if(flag==0)
       {
            sol(root->left,1,res+1,ans);
            sol(root->right,0,1,ans);
        }
    }
    int longestZigZag(TreeNode* root) {
int ans=INT_MIN;
        sol(root,1,0,ans);
        sol(root,0,0,ans);
        return ans;
    }
};