//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
         int n=s.size(),t=1,beg=0;
    string res="";
        for(int i=0;i<n;i++)
        {
            int l=i-1,r=i;
            while(l>=0 and r<n and s[l]==s[r])
            {
                if(r-l+1>t)
                {
                    t=r-l+1;
                    beg=l;
                }
                l--;r++;
            }
            l=i-1;
            r=i+1;
              while(l>=0 and r<n and s[l]==s[r])
            {
                if(r-l+1>t)
                {
                    t=r-l+1;
                    beg=l;
                }
                l--;r++;
            }
            
        }
        res=s.substr(beg,t);
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends