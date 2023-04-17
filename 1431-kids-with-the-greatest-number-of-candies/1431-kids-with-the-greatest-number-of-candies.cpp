class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int ex) {
        int n=candies.size();
        int maxi=*max_element(candies.begin(),candies.end());
         vector<bool> res(n);
        for(int i=0;i<n;i++)
        {
            if(candies[i]+ex>=maxi)
                res[i]=true;
            else 
                res[i]=false;
        }
        return res;
    }
};