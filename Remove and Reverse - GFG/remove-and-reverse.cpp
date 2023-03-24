//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string s) {
        // code here
        int n=s.size();
        vector<int>v(26,0);
        vector<int>arr(n,0);
        bool flag=false;
        for(int i=0;i<n;i++)
        v[s[i]-'a']++;
        int i=0,j=n-1;
        while(i<=j)
        {
            if(flag==false)
            {
                if(v[s[i]-'a']==1)
                {
                    arr[i]=1;
                    
                }
                else
                {
                    flag=true;
                    v[s[i]-'a']--;
                }
                i++;
            }
            else
            {
                if(v[s[j]-'a']==1)
                {
                    arr[j]=1;
                }
                else
                {
                    flag=false;
                    v[s[j]-'a']--;
                }
                j--;
            }
          
        }
           string res="";
            for(int k=0;k<n;k++)
            { 
                if(arr[k])
                res+=s[k];
            }
          if(flag==true)
          reverse(res.begin(),res.end());
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends