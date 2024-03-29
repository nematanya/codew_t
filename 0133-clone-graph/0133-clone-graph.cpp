/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void dfs(Node* node,Node* clone,vector<Node*> &vis)
    {
        vis[clone->val]=clone;
        for(auto it:node->neighbors)
        {
            if(vis[it->val]==NULL)
            {
                Node* clo=new Node(it->val);
                (clone->neighbors).push_back(clo);
                dfs(it,clo,vis);
            }
            else
                (clone->neighbors).push_back(vis[it->val]);
                
        }
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL) return node;
        vector<Node*>vis(103,NULL);
        Node* clone=new Node(node->val);
        dfs(node,clone,vis);
        return clone;
    }
};