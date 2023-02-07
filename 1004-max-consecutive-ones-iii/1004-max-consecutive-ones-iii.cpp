class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,cz=0,ans=0;
        int n=nums.size();
        while(j<n)
        {  if(nums[j]==0)cz++;
            if(cz<=k) ans=max(ans,j-i+1);
            if(cz>k)
            {
                while(cz>k)
                {
                    if(nums[i]==0)
                        cz--;
                    i++;
                }
                    
            }
           
            j++;
        }
        return ans;
    }
};