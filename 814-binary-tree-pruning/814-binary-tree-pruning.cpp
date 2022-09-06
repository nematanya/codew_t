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
 //    void traverse(TreeNode* root)
 //    {
 // if (root->left==nullptr and root->right==nullptr)      
 // { if(root->val!=1)
 //    root=NULL;           
 //    else 
 //    return;
 //    }
 //        traverse(root->left);
 //        traverse(root->right);
 //    }
    TreeNode* pruneTree(TreeNode* root) {
              if(root!=NULL){
            root->left = pruneTree(root->left);
            root->right = pruneTree(root->right);
            if(!root->left && !root->right && root->val==0)
                return NULL;
        }
        return root;
    }
};