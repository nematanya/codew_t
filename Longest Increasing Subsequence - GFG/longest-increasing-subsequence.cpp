//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here 
       vector<int>nums(n);
       for(int i=0;i<n;i++)
       nums[i]=a[i];
        vector<int>dp(n,1);
        for(int i=1;i<n;i++)
        {int temp=1;
            for(int j=0;j<i;j++)
            {  
                if(nums[j]<nums[i])
                {
                temp=max(temp,1+dp[j]);
                }
            }
            dp[i]=temp;
        }
        return *max_element(dp.begin(),dp.end());
       
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends