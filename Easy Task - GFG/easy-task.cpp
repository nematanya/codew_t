//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
     
        char sol(int k,vector<int>&mp)
        {
            int t=0;
            for(int i=25;i>=0;i--)
            {
                t+=mp[i];
                if(t>=k) return ('a'+i);
            }
            return 'a';
        }
    vector<char> easyTask(int n, string s,int q,vector<vector<string>> &que){
        // Code here
        vector<char>res;
        
  for(auto it:que)
  {
   if(it[0]=="1")
   {
       int ind=stoi(it[1]);
       char ch=it[2][0];
       s[ind]=ch;
   }
   else
   {
       int start=stoi(it[1]),e=stoi(it[2]);
       int k=stoi(it[3]);
      vector<int>mp(26,0);
       for(int i=start;i<=e;i++)
          mp[s[i] -'a']++;
    //  char ans=;
       res.push_back(sol(k,mp));
   }
  }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int q;
        cin>>q;
        vector<vector<string>> queries(q);
        for(int i=0;i<q;i++){
            string x;
            cin>>x;
            if(x=="1"){
                string p,q;
                cin>>p>>q;
                queries[i]={"1",p,q};
            }
            else{
                string p,q,r;
                cin>>p>>q>>r;
                queries[i]={"2",p,q,r};
            }
        }
        Solution ob;
        vector<char> ans=ob.easyTask(n,s,q,queries);
        for(auto ch:ans){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends