//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautySum(string s) {
        int n=s.length();
        int ans=0;
        // Your code goes here
        for(int i=0;i<n;i++)
        {
            vector<int> a(26,0);
            for(int j=i;j<n;j++)
            {  int mini=INT_MAX,maxi=0;
                 a[s[j]-'a']++;
                for(int k=0;k<26;k++)
                 { 
                     if(a[k]>maxi)
                     maxi=a[k];
                     if(a[k]!=0 and a[k]<mini)
                     mini=a[k];
                 }
                 
                 ans=ans+(maxi-mini);
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
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends