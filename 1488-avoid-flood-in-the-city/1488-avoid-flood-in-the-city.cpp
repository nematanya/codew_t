class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n=rains.size();
        map<int,int>mp;
        vector<int> ans(n,-1);
         set<int>z;
        for(int i=0;i<n;i++)
        {
            if(rains[i]==0){
                z.insert(i);
            ans[i]=1;}
            else{
                if(mp.count(rains[i]))
                {
                    int l=mp[rains[i]];
                    auto zero=z.upper_bound(l);
                    if(zero==z.end())return {};
                    ans[*zero]=rains[i];
                  z.erase(zero);
                }
   mp[rains[i]]=i;
            }
        }
                    return ans;

    }
};