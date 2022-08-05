class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
     map<int,int> mp;
        for(auto it:nums)
           mp[it]++;
        // priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
        // for(auto i:mp)
        // {
        //     pq.push({i.second,i.first});
        // }
        // vector<int> v;
        // while(pq.size())
        // { int n=pq.top().first;
        //      while(n){
        //     v.push_back(pq.top().second);
        // n--;}
        //     pq.pop();
        // }
        sort(nums.begin(),nums.end(),[&](int a,int b){
            return mp[a]!=mp[b]?mp[a]<mp[b]:a>b;
        });
        return nums;
    }
};