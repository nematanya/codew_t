class Solution {
public:
    bool sol(vector<int> &piles,int mid,int h)
    {
        int tot=0;
        for(auto it:piles)
        {
            tot+=(it/mid);
            if(it%mid!=0)tot++;
        }
        return tot<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int e=*max_element(piles.begin(),piles.end());
        int s=1;
        while(s<e)
        {
            int m=s+(e-s)/2;
            if(sol(piles,m,h)) e=m;
            else s=m+1;
        }
        return e;
    }
};