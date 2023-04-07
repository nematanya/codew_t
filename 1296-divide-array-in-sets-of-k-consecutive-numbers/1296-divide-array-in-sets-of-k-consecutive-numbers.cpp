class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
       unordered_map<int,int> mp;
        sort(nums.begin(), nums.end());
        if(nums.size()%k!=0){
            return false;
        }
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(int i=0; i<nums.size(); i++){
            if(mp[nums[i]]<=0){
                continue;
            }
            for(int j=nums[i] ; j<nums[i]+ k; j++){
                if(mp[j]<=0){
                    return false;
                }   
                    mp[j]--;   
            }
        }
        return true;
    }
};