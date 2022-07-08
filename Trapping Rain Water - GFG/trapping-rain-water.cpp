// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int msl[n];
        int msr[n];
        msl[0]=arr[0];
        for(int i=1;i<n;i++)
        msl[i]=max(msl[i-1],arr[i]);
        msr[n-1]=arr[n-1];
        for(int j=n-2;j>=0;j--)
        msr[j]=max(msr[j+1],arr[j]);
        int water[n];
    for(int i=0;i<n;i++)
    water[i]=min(msl[i],msr[i])-arr[i]; 
    long long sum=0;
     for(int i=0;i<n;i++)
     sum+=water[i];
     return sum;   
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends