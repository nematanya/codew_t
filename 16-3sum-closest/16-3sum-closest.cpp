class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       sort(nums.begin(),nums.end());
        int sum=0,ans;
        int n=nums.size(),temp=INT_MAX;
         for(int i=0;i<n;i++){
            for(int j=i+1,k=n-1;j<k;)
            {
                sum=nums[i]+nums[j]+nums[k];
                if(sum>target) k--;
                else if( sum<target) j++;
                else
                    return sum;
                if(abs(sum-target)<temp){
                    ans=sum;
                    temp=abs(sum-target);
                }
            }
        }
        return ans;
    }
}; 


