//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> longestIncreasingSubsequence(int n, vector<int>& nums) {
        // Code here
          vector<int>dp(n,1);
          vector<int>t(n);
          for(int i=0;i<n;i++)
          t[i]=i;
          int last;
          int maxi=0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {  
                if(nums[j]<nums[i] and dp[i]<dp[j]+1)
                {
                    dp[i]=dp[j]+1;
                    t[i]=j;
                }
            }
            if(dp[i]>maxi)
            {
                maxi=dp[i];
                last=i;
            }
        }
        vector<int> ans;
        ans.push_back(nums[last]);
        while(last!=t[last])
        {
            last=t[last];
            ans.push_back(nums[last]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
       
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        vector<int> res = obj.longestIncreasingSubsequence(N, arr);
        for (auto x : res) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends