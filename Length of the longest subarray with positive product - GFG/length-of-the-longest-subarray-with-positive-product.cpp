//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
           //code here
           int ans=0;
           int cn=0;
           int prev=-1;
           int firstneg=-1;
           for(int i=0;i<n;i++)
           {
               if(arr[i]<0)
               {
                   cn++;
                   if(firstneg==-1) firstneg=i;
               }
               if(arr[i]==0)
               {
                   prev=i;
                   firstneg=-1;
                   cn=0;
               }
               else
               {
                   if(cn%2==0)
                   ans=max(ans,i-prev);
                   else
                   ans=max(ans,i-firstneg);
               }
           }
           return ans;
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends