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
    int recur(TreeNode* root, long long target)
{
  
        
if(root==NULL)return 0;
          int a=0,b=0;
 if(root->val==target) b++;
 
a+=recur(root->left,target-root->val);

 b+=recur(root->right,target-root->val);
return a+b;

}
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL)return 0;
   return recur(root,targetSum)+pathSum(root->left,targetSum)+pathSum(root->right,targetSum);

    
    }

};
