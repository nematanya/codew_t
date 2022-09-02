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
    vector<double> averageOfLevels(TreeNode* root) {
         vector<double> ans;

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {    
            int size=q.size();
            vector<int> temp;
            for(int i=0;i<size;i++)
            { TreeNode* t=q.front();q.pop();
             temp.push_back(t->val);
             if(t->left) q.push(t->left);
             if(t->right) q.push(t->right);
             }
            int n=temp.size();
            double sum=0.0;
            for(auto it:temp)
                sum+=it;
             double avg=sum/n;
            ans.push_back(avg);
                
        }
        
     return ans;
    }
};