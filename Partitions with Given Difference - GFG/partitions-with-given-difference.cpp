//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
	int mod=1000000007;
	int sol(vector<int> &arr,int target,int i,vector<vector<int>>& dp)
{   if(i==0){
    if(target==0 and arr[0]==0) return 2;
    if(target==0 or target==arr[0]) return 1;
     return 0;}
    if(dp[i][target]!=-1)return dp[i][target];
    int nonpick=sol(arr,target,i-1,dp)%mod;
    int pick=0;
    if(arr[i]<=target)pick=sol(arr,target-arr[i],i-1,dp)%mod;
    return dp[i][target]=(pick+nonpick)%mod;
}
    int countPartitions(int n, int d, vector<int>& arr) {
        // Code here
        int tot=0;
        for(auto it:arr)
        tot+=it;
        if((tot-d)<0 or (tot-d)%2!=0) return false;
        int t=(tot-d)/2;
        vector<vector<int>>dp (n,vector<int>(t+1,-1));
        return sol(arr,t,n-1,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends