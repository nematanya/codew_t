class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        int t=0;
        map<vector<int>,int>mp;
        while(t<n)
        {
            vector<int>temp;
         for(int i=0;i<n;i++)
         {
             temp.push_back(grid[t][i]);
         }
         mp[temp]++;
         t++;
        }
     t=0;
        int ans=0;
        while(t<n)
        {
            vector<int>temp;
             for(int i=0;i<n;i++)
             temp.push_back(grid[i][t]);
            if(mp.find(temp)!=mp.end())
                ans+=mp[temp];
            t++;
        }
        return ans;
    }
};