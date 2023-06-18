class Solution {
public:
    int n,m,mod = 1e9+7;
    vector<vector<int>>dp,a;
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    int countPaths(vector<vector<int>>& grid) {
        a = grid;
        n = grid.size();
        m = grid[0].size();
        dp.resize(n+2,vector<int>(m+2,-1));
        int ans= n*m;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                ans = add(ans,sol(i,j));
        
        return ans;
    }
    bool in(int i,int j){
        return i>=0 and j>=0 and i<n and j<m;
    }
    int add(int a,int b){
        return ((a%mod + b%mod)%mod+ mod)%mod;
    }
    int sol(int i,int j){
        int& ret= dp[i][j];
        if(~ret)
        return ret;
        ret = 0;
        for(int k = 0 ;k<4;k++){
            int x = i + dx[k], y = j + dy[k];
            if(in(x,y) and a[x][y]>a[i][j])
                ret = add(ret,1 + sol(x,y));
        }
        return ret;
    }
};