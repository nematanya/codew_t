class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
		if(connections.size()<n-1){return -1;}
		vector<int>v(n,0);
		vector<int>adj[n];
		for(int i=0; i<connections.size(); i++){
			adj[connections[i][0]].push_back(connections[i][1]);
			adj[connections[i][1]].push_back(connections[i][0]);
		}
		int res=-1;
		for(int i=0;i<n;i++){
			if(!v[i]){
				res++;
				queue<int>q;
				q.push(i);
				v[i]=1;
				while(!q.empty()){
					int x=q.front();
					q.pop();
					for(auto it:adj[x]){
						if(!v[it]){
							v[it]=1;
							q.push(it);
						}
                    }
				}
			}
		}
		return res;
	}
};