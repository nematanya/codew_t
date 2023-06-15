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
    int maxLevelSum(TreeNode* root) {
        int sum=INT_MIN;
        int ans;
        queue<TreeNode*>q;
        q.push(root);
        int l=0;
        while(q.size())
        { l++;
            int t=q.size();
            int lsum=0;
            for(int i=0;i<t;i++)
            {
                TreeNode* temp=q.front();
                lsum+=temp->val;
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
         cout<<lsum<<endl;
            if(lsum>sum){
                sum=lsum;
                ans=l;
            }
        }
        return ans;
    }
};