//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
 int sol(int r,int c,vector<vector<int>> &colors, vector<vector<int>> &dp){
    if(r < 0) return 0;
    if(dp[r][c]!=-1) return dp[r][c];
    int t1,t2;
    if(c==0)
    {
       t1=colors[r][1]+sol(r-1,1,colors,dp);
       t2=colors[r][2]+sol(r-1,2,colors,dp);
    }
    if(c==1)
    {
       t1=colors[r][0]+sol(r-1,0,colors,dp);
       t2=colors[r][2]+sol(r-1,2,colors,dp);
}
if(c==2)
    {
       t1=colors[r][1]+sol(r-1,1,colors,dp);
       t2=colors[r][0]+sol(r-1,0,colors,dp);
}
return dp[r][c]=min(t1,t2);
}
    int minCost(vector<vector<int>> &colors, int n) {
        // Write your code here.
        vector<vector<int>>dp(n+1,vector<int>(3,-1));
        return min(colors[n-1][0]+sol(n-2,0,colors,dp),min(colors[n-1][1]+sol(n-2,1,colors,dp),colors[n-1][2]+sol(n-2,2,colors,dp)));
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends