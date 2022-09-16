class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
       int res=0;
        if(n==0) return tasks.size();
        map<char,int>mp;
        int maxi=0;
        for(auto it:tasks)
        {mp[it]++;
        maxi=max(maxi,mp[it]);}
        res=(maxi-1)*(n+1);
        for(auto it:mp)
            if(it.second==maxi)res++;
        int ans=max(res,(int)tasks.size());
        return ans;
    }
};