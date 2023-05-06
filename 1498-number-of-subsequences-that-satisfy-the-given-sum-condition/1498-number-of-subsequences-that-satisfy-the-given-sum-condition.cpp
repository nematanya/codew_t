class Solution {
public:
    long long int mod= 1e9+7;
    int pow(int t)
    {  if(t==0)return 1;
     if(t==1) return 2; 
        long long res=1;
           if(t&1)
        {
            res*=pow(t-1);
            res*=2;
            res=res%mod;
        }
         else
         {
             res*=pow(t/2);
             res=res%mod;
             res=(res*res)%mod;
         }
return res%mod;
    }
        
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        int i=0,j=n-1;
        while(i<=j)
        {
            if(nums[i]+nums[j]>target)
                j--;
            else 
            {
                ans+=pow(j-i); 
                ans=ans%mod;
                i++;
            }
        }
        return ans;
    }
};