//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    string secondSmallest(int s, int d){
        // code here 
        if(s==1 or d==1) return "-1";
        if(9*d<=s) return "-1";
        string t(d,'9');
        int last=-1;
        for(int i=d-1;i>=0;i--)
{
    if(s>9)
    {
        s-=9;
    }
    else if(s>0 )
    {
        last=i;
        t[i]='0'+ s;
        s=0;
    }
    else
    t[i]='0';
    
}

if(t[0]=='0')
{ 
    t[0]='1';
    t[last]-=1;
}

int j=d-2;
while(j>=0)
{
    if(t[j]!='9')
    {
        t[j+1]-=1;
        t[j]+=1;
        break;
    }
    j--;
}
        return t;
        
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.secondSmallest(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends