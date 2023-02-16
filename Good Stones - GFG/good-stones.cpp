//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    int goodStones(int n,vector<int> &arr){
        // Code here
        vector<int>path;
        set<int>s;
        vector<bool> vis(n,0);
        for(int i=0;i<n;i++)
        {
          if(vis[i]) continue;
          int j=i;
          while(!vis[j])
          {
              vis[j]=1;
              path.push_back(j);
              j=j+arr[j];
              if(j>=n or j<0)
              {
                  for(auto it:path)
                  {
                      s.insert(it);
                      
              }
              path.clear();
              break;
          }
        }
        if(path.size() and s.count(j))
        {
            for(auto it:path)
            s.insert(it);
        }
          path.clear(); 
        }

        return s.size();
    }  
};
  


//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.goodStones(n,arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends