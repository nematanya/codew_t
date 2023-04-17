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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        q.push(root);
       
        while(!q.empty())
        {
            int n=q.size();
             bool f1=false,f2=false;
            for(int i=0;i<n;i++)
            {
                TreeNode* temp=q.front();
                if(temp->val==x)f1=true;
                if(temp->val==y)f2=true;
                q.pop();
                if(temp->left and temp->right){
        if((temp->left->val==x and temp->right->val==y )or(temp->left->val==y and temp->right->val==x)) return false;}
            if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            if(f1&&f2)return true;
        }
        return false;
        
    }
};