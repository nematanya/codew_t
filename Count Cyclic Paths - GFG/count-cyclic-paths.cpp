//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
  long long mod = 1000000007;

    int countPaths(int N){
        long long a = 0;
        long long b = 0;
        for(int i = 0;i<N-1;i++){
            a = ((b%mod)*2)%mod;
            if(i%2==0){
                a = ((a%mod)+3)%mod;
            }
            b=(b%mod+a%mod)%mod;
            // cout<<a<<" "<<b<<endl;
        }
        return a;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends