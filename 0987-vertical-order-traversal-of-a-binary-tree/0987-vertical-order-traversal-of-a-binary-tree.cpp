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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map<int,map<int,multiset<int>>> mp;
        // queue<pair<TreeNode*,pair<int,int>>>q;
        // q.push({root,{0,0}});
         queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty())
        {
           auto temp=q.front(); 
            q.pop();
            TreeNode* t=temp.first;
            int v=temp.second.first;
            int l=temp.second.second;
            mp[v][l].insert(t->val);
            if(t->left)
                q.push({t->left,{v-1,l+1}});
            if(t->right)
                q.push({t->right,{v+1,l+1}});
        }
        for(auto it:mp)
        {
            vector<int> temp;
            for(auto f:it.second)
                 temp.insert(temp.end(), f.second.begin(),f.second.end());
             
            ans.push_back(temp);
        }
        return ans;
    }
};