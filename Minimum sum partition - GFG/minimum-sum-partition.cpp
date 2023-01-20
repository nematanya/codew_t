//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	     int sum=0;
        for(int i=0;i<n;i++)
        sum+=arr[i];
        vector<vector<bool>>dp(n+1,vector<bool>(sum+1,0));
        for(int i=0;i<n;i++)
        dp[i][0]=1;
          dp[0][arr[0]]=true;
        for(int i=1;i<n;i++)
        {
            for(int target=1;target<=sum;target++)
            {
                bool nonpick=dp[i-1][target];
    bool pick=false;
     if(arr[i]<=target)pick=dp[i-1][target-arr[i]];
     dp[i][target]=(pick or nonpick);
            }
        }
    int mini=1e9;
    for(int i=sum/2;i>=0;i--)
    {
   if(dp[n-1][i]==true)
   {
       mini=min(mini,abs((sum-i)-i));
   }}
   return mini;
    
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends