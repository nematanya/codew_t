class Solution {
public:
    int sol(int i,int k,vector<int>& arr,vector<int>&dp)
    { int n=arr.size();
        if(i==n) return 0;
     if(dp[i]!=-1)return dp[i];
     int maxi=INT_MIN;
     int len=0;
     int sum=INT_MIN;
     for(int j=i;j<min(i+k,n);j++)
     { len++;
      maxi=max(maxi,arr[j]);
         int temp=len*maxi+sol(j+1,k,arr,dp);
         sum=max(sum,temp);
     }
     return dp[i]=sum;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n =arr.size();
        vector<int>dp(n,-1);
       return sol(0,k,arr,dp);
    }
};