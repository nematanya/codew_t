class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int ans;
        int diff=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            int tar=target-nums[i];
            int j=i+1,k=n-1;
            while(j<k)
            {
                if(nums[j]+nums[k]==tar)
                {
                    ans=target;
                    break;
    
                }
                else if(nums[j]+nums[k]<tar)
                {
                    int temp=abs(target-(nums[i]+nums[j]+nums[k]));
                    if(temp<diff){diff=temp;
                        ans=nums[i]+nums[j]+nums[k];}
                    j++;
                }
                else
                {
                    int temp=abs((nums[i]+nums[j]+nums[k])-target);
                    if(temp<diff)
                    { 
                        diff=temp;
                        ans=nums[i]+nums[j]+nums[k];
                    }
                    k--;
                }
            }
        }
        return ans;
    }
};