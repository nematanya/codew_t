//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int a, int b, int c, int d){
        //code here
        int ans1=0;
        int a1=a,b1=b,c1=c,d1=d;
        while(a1>c1 or b1>d1)
        {
            if(a1>c1)a1=a1/2,ans1++;
            if(b1>d1)b1=b1/2,ans1++;
        }
    
        int ans2=0;
        while(b>c or a>d)
        {
            if(a>d){a=a/2;ans2++;}
            if(b>c){b=b/2;ans2++;}
        }
        return min(ans1,ans2);
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends