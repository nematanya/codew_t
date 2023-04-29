class Solution {
public:
  int parent[100005];
  int rank[100005];
    static bool cmp(vector<int>&a,vector<int>&b){
      return a[2]<b[2];
    }
    void makeset(int n){
    for(int i=0;i<=n;i++){parent[i]=i;rank[i]=0;}
    }
    int findpar(int n){
        if(n==parent[n])return n;
        return parent[n]=findpar(parent[n]);
    }
    void make_union(int a,int b){
        a=findpar(a);
        b=findpar(b);
        if(rank[a]>rank[b]){
            parent[b]=a;
        }
        else if(rank[a]<rank[b]){
            parent[a]=b;
        }
        else{
            parent[a]=b;
            rank[b]++;
        }
    }
    vector<bool> distanceLimitedPathsExist(int n, vector<vector<int>>& edgeList, vector<vector<int>>& queries) {
        sort(edgeList.begin(),edgeList.end(),cmp);
        
        for(int i=0;i<queries.size();i++)
        {
            queries[i].push_back(i);
        }
        sort(queries.begin(),queries.end(),cmp);
        vector<bool>ans(queries.size());
        makeset(n);
        int j=0;
        for(int i=0;i<queries.size();i++){
              for(;j<edgeList.size() and queries[i][2]>edgeList[j][2];j++){
                   make_union(edgeList[j][0],edgeList[j][1]);
                  }             
                      if(findpar(queries[i][0])==findpar(queries[i][1])){
                          ans[queries[i][3]]=true;
                      }
                      else ans[queries[i][3]]=false;
                  
           
                  }
              
        
  return ans;

    }
};