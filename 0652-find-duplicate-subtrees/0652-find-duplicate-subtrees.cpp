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
string solve(vector<TreeNode*>&result,TreeNode* root,unordered_map<string,int>&mp)
{
if(root==NULL)return "n";
string s=to_string(root->val)+","+solve(result,root->left,mp)+","+solve(result,root->right,mp);
if(mp[s]==1)result.push_back(root);
 mp[s]++;
return s;

}
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*>result;
        unordered_map<string,int>mp;
        solve(result,root,mp);
        return result;
    }
};