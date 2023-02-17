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
    void postorder(TreeNode* root,vector<int>&p){
        if(root==NULL) return;
         postorder(root->right,p);
        p.push_back(root->val);
    postorder(root->left,p);
       
    }
    int minDiffInBST(TreeNode* root) {
        vector<int>p;
        postorder(root,p);
        int ans=INT_MAX;
        int i=1;
        int j=0;
        for(auto it:p)
cout<<it;
            while(i<p.size())
        {  ans=min(ans,abs(p[i]-p[j]));
            i++;
         j++;
        } 
        return ans;
    }
};