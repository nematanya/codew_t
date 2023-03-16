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
    TreeNode* sol(vector<int>&in ,int is,int ie,vector<int>&post,int ps,int pe,unordered_map<int,int> &mp)
    {
        if(ie<is or pe<ps) return NULL;
        TreeNode* root=new TreeNode(post[pe]);
        int ind=mp[post[pe]];
        int left=ind-is;
        root->left=sol(in,is,ind-1,post,ps,ps+left-1,mp);
        root->right=sol(in,ind+1,ie,post,ps+left,pe-1,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& post) {
      unordered_map<int,int>mp;
        for(int i=0;i<inorder.size();i++)
        mp[inorder[i]]=i;
    return sol(inorder,0,inorder.size()-1,post,0,post.size()-1,mp);
    }
};