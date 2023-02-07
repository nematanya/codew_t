class Solution {
public:
    int totalFruit(vector<int>& f) {
        if(f.size()<=2) return f.size();
        int ans=0;
        map<int,int>mp;
        int i=0,j=0;
        int n=f.size();
        while(j<n)
        {
             mp[f[j]]++;
            j++;
          if(mp.size()>2)
          { while(mp.size()>2){
              if(mp[f[i]]==1) mp.erase(f[i]);
              else
                  mp[f[i]]--;
              i++;
          }
          }
            else if(mp.size()<=2)
                ans=max(ans,((j-1)-i+1));
        }
        return ans;
    }
};