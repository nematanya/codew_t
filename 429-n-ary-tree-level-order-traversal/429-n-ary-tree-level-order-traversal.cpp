/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
         vector<vector<int>> ans;
        if(root==NULL) return ans;
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
            int s=q.size();
       
            for(int i=0;i<s;i++){
                   Node* t=q.front();
            q.pop();
                for(auto it:t->children)
                    q.push(it);
                temp.push_back(t->val);
            }
            
            ans.push_back(temp);
        }
        return ans;
    }
};