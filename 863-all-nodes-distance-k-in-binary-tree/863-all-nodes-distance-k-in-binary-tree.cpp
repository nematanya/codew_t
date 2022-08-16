/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void parents(TreeNode* root, unordered_map<TreeNode*,TreeNode*>& mp)
    {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        { 
            TreeNode* fr=q.front();
            q.pop();
            if(fr->left)
            {
                mp[fr->left]=fr;
                q.push(fr->left);
            }
            if(fr->right)
            {
                mp[fr->right]=fr;
                q.push(fr->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
      unordered_map<TreeNode*,TreeNode*> mp;
        parents(root,mp);
        unordered_map<TreeNode*,bool> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target]=true;
        int dis=0;
        while(!q.empty())
        {
            if(dis++==k) break;
             int size=q.size();
            for(int i=0;i<size;i++)
            { TreeNode* curr=q.front();
             q.pop();
                if(curr->left and !visited[curr->left])
                {
                    q.push(curr->left);
                    visited[curr->left]=true;
                }
              if(curr->right and !visited[curr->right])
                {
                    q.push(curr->right);
                    visited[curr->right]=true;
                }
              if( mp[curr] and !visited[mp[curr]])
                {
                    q.push(mp[curr]);
                    visited[mp[curr]]=true;
                }
            }
        }
        vector<int> res;
       while(!q.empty())
        {   TreeNode* temp=q.front();
             q.pop();
            res.push_back(temp->val);
        }
        return res;
    }
};