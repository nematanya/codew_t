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
 
    void pre(TreeNode* root,int max,int& ans)
    {
        if(!root) return;
        if(root->val>=max){
            ans++;
            max=root->val;
        }
            pre(root->left,max,ans);
            pre(root->right,max,ans);
        }
    
    int goodNodes(TreeNode* root) {
    int ans=0;
        int max=INT_MIN;
        pre(root,max,ans);
        return ans;
    }
};