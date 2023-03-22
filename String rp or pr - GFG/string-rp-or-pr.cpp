//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
long long sol(char ch1,char ch2,int X,int Y,string s)
{
      long long x=0,y=0,ans=0;
      stack<char>st;
      for(int i=0;i<s.length();i++)
      {
          if(st.empty()==false and s[i]==ch1 and st.top()==ch2)
          {
            st.pop();
            ans+=X;
            }
          else 
          st.push(s[i]);
          }
        stack<char>s2;
        string str="";
        while(!st.empty())
        {
            str+=(st.top());
            st.pop();
        }
        reverse(str.begin(),str.end());
    for(int i=0;i<str.length();i++)
      {
          if(s2.empty()==false and str[i]==ch2 and s2.top()==ch1)
          {
            s2.pop();
            ans+=Y;
            }
          else 
          s2.push(str[i]);
          }
          return ans;
}
    long long solve(int X,int Y,string s){
      //code here
      if(X>Y)
      return sol('r','p',X,Y,s);
      return sol('p','r',Y,X,s);
    
    }
};

//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends