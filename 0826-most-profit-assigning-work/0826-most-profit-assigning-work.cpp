class Solution {
public:
    int maxProfitAssignment(vector<int>& diff, vector<int>& profit, vector<int>& worker) {
        int n=diff.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
            v.push_back({diff[i],profit[i]});
        sort(v.begin(),v.end());
        int res=0;
        sort(worker.begin(),worker.end());
     for(auto it:worker)
     {
int ans=0,i=0;
         while(i<n and it>=v[i].first)
         {
             ans=max(ans,v[i].second);
             i++;
         }
         res+=ans;
     }
        return res;
    }
};