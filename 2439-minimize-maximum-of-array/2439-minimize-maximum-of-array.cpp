class Solution {
public: 
    bool sol(int mid,vector<int>&nums)
    {
        long long cred=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=mid)
            {
                cred+=(1ll*mid-1ll*nums[i]);
            }
            else if(nums[i]-cred>mid) return false;
            else
            {
                cred-=(1ll*nums[i]-1ll*mid);
            }
        }
        return true;
    }
    int minimizeArrayValue(vector<int>& nums) {
            int s=0,e=*max_element(nums.begin(),nums.end()),ans=0;
        int mid;
        while(s<=e)
        {
            mid=(e-s)/2+s;
            if(sol(mid,nums))
            { ans=mid;
                e=mid-1;}
            else
                s=mid+1;
        }
        return ans;
        }
};