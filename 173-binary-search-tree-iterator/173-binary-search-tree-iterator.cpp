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
class BSTIterator {
public:
    void leftpush(TreeNode* root)
    {
        while(root)
        {
            s.push(root);
            root=root->left;
        }
    }
    stack<TreeNode*>s;
    BSTIterator(TreeNode* root) {
     leftpush(root);
    }
    
    int next() {
        TreeNode* temp=s.top();
        s.pop();
     if(temp->right)
         leftpush(temp->right);
        return temp->val;
    }
    
    bool hasNext() {
        return (!s.empty());
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */