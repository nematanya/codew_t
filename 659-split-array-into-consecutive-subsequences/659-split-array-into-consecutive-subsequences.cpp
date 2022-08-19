class Solution {
public:
    bool isPossible(vector<int>& nums) {
       map<int,int> mp;
        for(auto it:nums )
            mp[it]++;
        for(auto it:nums)
        {   if(mp[it]==0) continue;
            int num=mp[it];
            int curr=it,count=0;
            while(mp[curr]>=num)
            {  num=max(num,mp[curr]);
                mp[curr]--;
                curr++;
                count++;
            }
            if(count<3) return false;
            
        }
        return true;
    }
};