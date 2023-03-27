//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int sol(int i,int sum,int n,int k,vector<vector<vector<int>>>& dp)
  {
      if(sum==n and k==0) return 1;
      if(i==n or k<0 or sum>n) return 0;
      if(dp[i][sum][k]!=-1) return dp[i][sum][k];
      int take=sol(i,sum+i+1,n,k-1,dp);
      int nottake=sol(i+1,sum,n,k,dp);
      return dp[i][sum][k]=take+nottake;
  }
    int countWaystoDivide(int n, int k) {
        // Code here
  
      vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(n+1,vector<int>(k+1,-1)));
          return  sol(0,0,n,k,dp);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        Solution ob;
        cout << ob.countWaystoDivide(N, K) << endl;
    }
}
// } Driver Code Ends