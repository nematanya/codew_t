class Solution {
public:
    
    long long calculate(vector<int>& nums, vector<int>& cost,long long median){
        long long ans = 0;
        for(int i=0;i<nums.size();i++){
            ans=ans+ (abs(1ll*nums[i]-median)*(1ll*cost[i]));
        }
        return ans;
    }
    
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long sum = 0,tot = 0;
        long long n = cost.size();
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++){
            vec.push_back({nums[i],cost[i]});
        }
        sort(vec.begin(),vec.end());
        for(int i : cost){
            sum = sum + 1ll*i;
        }
        
        long long median;
        int i =0 ;
        while(tot<(sum+1)/2 and i<n){
            tot=tot+(1ll*vec[i].second);
            median = vec[i].first;
            i++;
        }
        return calculate(nums,cost,median);
    }
};