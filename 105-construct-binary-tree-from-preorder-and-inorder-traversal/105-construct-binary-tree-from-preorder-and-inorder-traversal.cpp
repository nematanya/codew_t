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
    TreeNode* build(vector<int> &preorder,int pstart,int pend,vector<int> &inorder,int istart,int iend,map<int,int> &mp)
    { if(pstart>pend or istart>iend) return nullptr;
        TreeNode* root= new TreeNode(preorder[pstart]);
     int iroot=mp[root->val];
        int ileft=iroot-istart;
        root->left= build(preorder,pstart+1,pstart+ileft,inorder,istart,iroot-1,mp);
      root->right=build(preorder,pstart+ileft+1,pend,inorder,iroot+1,iend,mp);
     return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
   map<int,int> mp;
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;
        TreeNode* root= build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        return root;
    }
};