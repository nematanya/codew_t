//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int n, string s, int x){
        // code here
        int i=0;
        while(i<n)
        {
            if(s[i]=='1')
            { 
            int t=x;
            int temp=i-1;
            i++;
                while(i<n and t--)
                {  if(s[i]=='0')
                    {s[i]='1';
                    i++;}
                }
                t=x;
                 while(temp>=0 and t--)
                {
                    s[temp]='1';
                    temp--;
                }
                
            }
            else
            i++;
        }
        for(int j=0;j<n;j++)
        {
            if(s[j]=='0')return 0;
        }
return 1;   
}
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends