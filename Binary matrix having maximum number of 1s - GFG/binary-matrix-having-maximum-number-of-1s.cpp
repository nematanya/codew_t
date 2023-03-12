//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int n) {
        //code here
        int rn=INT_MIN,rc=INT_MIN;
      for(int i=0;i<n;i++)
      {
          int t=0;
          for(int j=0;j<n;j++)
          {
              if(mat[i][j]==1) t++;
          }
          if(t>rc) {
              rn=i;
              rc=t;
          }
      }
      return {rn,rc};
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends