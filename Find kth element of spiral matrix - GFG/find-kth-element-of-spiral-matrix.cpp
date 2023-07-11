//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int arr[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int t=0,left=0,right=m-1,top=0,bottom=n-1;
 		int dir=1;
 		while(true)
 		{
 		 if(dir==1)
 		 {
 		     for(int i=left;i<=right;i++)
 		     {
 		         t++;
 		         if(t==k)
 		         return arr[top][i];
 		      
 		     }
 		        top++;
 		     dir=2;
 		 }
 		 else if(dir==2)
 		 {
 		      for(int i=top;i<=bottom;i++)
 		     {
 		         t++;
 		         if(t==k) return arr[i][right];
 		        
 		     }
 		      right--;
 		     dir=3;
 		 }
 		 
 		 else if(dir==3)
 		 {
 		     for(int i=right;i>=left;i--)
 		     {
 		         t++;
 		         if(t==k) return arr[bottom][i];
 		      
 		     }
 		        bottom--;
 		     dir=4;
 		     
 		 }
 		else  if(dir==4)
 		
 		{
 		    for(int i=bottom;i>=top;i--)
 		     {
 		         t++;
 		         if(t==k) return arr[i][left];
 		   
 		     }
 		  left++;
 		     dir=1;
 		
 		}
 	
    }
    return 0;
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends