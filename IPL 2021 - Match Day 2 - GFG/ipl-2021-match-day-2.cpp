//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int> ans;
        priority_queue<pair<int,int>>pq;
          for(int i=0;i<k;i++)
            pq.push({arr[i],i});
        
        ans.push_back(pq.top().first);
        for(int j=k;j<n;j++)
        {
            pq.push({arr[j],j});
             while(pq.top().second<=j-k)
               pq.pop();
            ans.push_back(pq.top().first);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends