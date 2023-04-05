//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int n, vector<int> arr) {
        // Code here
        int ans=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            int t=i+1;
            int temp=1;
            while(t<n and arr[t]==arr[i])
            {
                t++;
                temp++;
            }
            if(temp>1)
            {
                ans+=temp;
                i=t-1;
            }
            else
            {
                for(int j=0;j<i;j++)
                {
                    if(arr[i]%arr[j]==0)
                   { ans++;
                    break;}
                }
            }
            
        }
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

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends