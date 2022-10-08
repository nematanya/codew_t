class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(i>0 and nums[i]==nums[i-1]) continue;
          for(int j=i+1,k=n-1;j<k;)
          {
              sum=nums[i]+nums[j]+nums[k];
              if(sum>0) k--;
              else if(sum<0) j++;
              else
              {res.push_back({nums[i],nums[j],nums[k]}); 
               while(j+1<k and nums[j]==nums[j+1])j++;
               while(k-1>k and nums[k]==nums[k-1])k--;
              j++;k--;
              }
          }
        }
        return res;
    }
};