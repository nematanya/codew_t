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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
                if(root==NULL) return ans;

      queue<TreeNode*> q;
        q.push(root);
        int k=0;
        while(!q.empty())
        {
            vector<int>t;
            int n=q.size();
            for(int i=0;i<n;i++)
            
            {            
            TreeNode* temp=q.front();
            t.push_back(temp->val);
            q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right)q.push(temp->right);
            } 
            if(k&1)
            {
                reverse(t.begin(),t.end());
                ans.push_back(t);
                k++;
            }
            else{
                            ans.push_back(t);

                k++;
            }
        }
        return ans;
    }
};