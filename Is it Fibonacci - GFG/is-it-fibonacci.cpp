//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int n, int k, vector<long long> g) {
        // code here
        long long sum=0;
        for(int i=0;i<k;i++)
        sum+=g[i];
        if(n==k) return g[k-1];
        int t=n-k-1;
        int i=0;
        g.push_back(sum);
        int j=k;
        while(t--)
        {
            sum=sum-g[i];
            i++;
            sum+=g[j];
            j++;
            g.push_back(sum);
            
        }
        return g[j];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends