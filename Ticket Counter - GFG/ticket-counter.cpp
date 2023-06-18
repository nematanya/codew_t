//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int n, int k) {
        // code here
    deque<int>q;
    for(int i=1;i<=n;i++)
    q.push_back(i);
    bool flag=0;
   
    while(q.size()>1)
    {
      if(flag==0)
      {
          int t=k;
          while(q.size()>1 and t--)
      q.pop_front();
      flag=1;
    }
     else if(flag==1)
      {
          int t=k;
          while(q.size()>1 and t--)
      q.pop_back();
          flag=0;
      }
    }
    return q.front();
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends