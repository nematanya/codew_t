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
    // bool isleaf(TreeNode* root)
    // {
    //     if(root->left==NULL and root->right==NULL)return true;
    //     return false;
    // }
        
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int res=1;
      queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty())
        {
            int n=q.size();
            int s=q.front().second;
            int e=q.back().second;
            res=max(res,(e-s+1));
            for(int i=0;i<n;i++)
            
            {            
            auto temp=q.front();
            q.pop();
            TreeNode* nodee=temp.first;
              int ind=temp.second-s;  
             if(nodee->left)
             {
                 q.push({nodee->left,2ll*ind+1});
             }
                if(nodee->right)
             {
                 q.push({nodee->right,2ll*ind+2});
             }
            }
            
                
            } 
  

        return res;
    }
};