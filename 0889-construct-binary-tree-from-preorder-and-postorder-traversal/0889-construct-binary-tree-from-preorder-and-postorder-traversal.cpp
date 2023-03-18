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
    TreeNode* sol(vector<int>&pre,int pres,int pree,vector<int>&post,int posts,int poste, unordered_map<int,int> &mp)
    {
        if(pres>pree)
            return NULL;
        TreeNode* root=new TreeNode(pre[pres]);
            if(pres==pree)return root;
        int idx=mp[pre[pres+1]];
        int dis=idx-posts+1;
        root->left=sol(pre,pres+1,pres+dis,post,posts,idx,mp);
        root->right=sol(pre,pres+1+dis,pree,post,idx+1,poste,mp);
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        unordered_map<int,int>mp;
        for(int i=0;i<post.size();i++)
            mp[post[i]]=i;
        return sol(pre,0,pre.size()-1,post,0,post.size()-1,mp);
    }
};