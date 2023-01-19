//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
int sol(vector<int> arr,int target,int i,vector<vector<int>> &dp)
{
    if(target==0) return 1;
    if(i==0) return (arr[i]==target);
    if(target<0) return false;
    if(dp[i][target]!=-1)return dp[i][target];
    bool nonpick=sol(arr,target,i-1,dp);
    bool pick=sol(arr,target-arr[i],i-1,dp);
    return dp[i][target]=(pick+nonpick);
}
    bool isSubsetSum(vector<int>arr, int sum){
        // code here
           int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        return sol(arr,sum,n-1,dp);
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends