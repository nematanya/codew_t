//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int equalSum(int n, vector<int> &a) {
        // code here
        if(n==1) return 1;
        vector<int>pre(n,0);
        pre[0]=a[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=a[i]+pre[i-1];
        }
       vector<int>suf(n,0);
       suf[n-1]=a[n-1];
       for(int i=n-2;i>=0;i--)
        suf[i]=suf[i+1]+a[i];
        for(int i=0;i<n;i++)
        {
            if(pre[i]==suf[i]) return i+1;
        }
        return -1;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N; 
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.equalSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends