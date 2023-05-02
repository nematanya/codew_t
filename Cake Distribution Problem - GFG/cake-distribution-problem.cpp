//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    int maxSweetness(vector<int>& s, int n, int k) {
    // Write your code here.
     int st=1,e=1e9,ans=0;
     while(st<=e)
     {
         int mid=st+(e-st)/2;
         int temp=0,sum=0;
         for(int i=0;i<n;i++)
         {
             sum+=s[i];
             if(sum>=mid)
             {
                 temp++;
                 sum=0;
             }
         }
         if(temp>=k+1)
         {ans=mid;
         st=mid+1;}
         else
         e=mid-1;
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
        vector<int> sweetness(n);
        for (int i = 0; i < n; i++) {
            cin >> sweetness[i];
        }
          Solution ob;
          int res=ob.maxSweetness(sweetness, n, k);
        cout << res << endl;
    }
}
// } Driver Code Ends