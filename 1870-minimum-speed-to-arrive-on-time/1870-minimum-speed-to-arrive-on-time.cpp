class Solution {
public:
    bool check(int mid,vector<int>&dist,double hour)
{
    double t=0;
    for(auto it:dist)
    {   t=ceil(t);
        t+=(double)it/mid;
           if(t>hour) return false;
    }
 
    return true;
}
    int minSpeedOnTime(vector<int>& dist, double hour) {
       int s=1,e=1e8,mid;
        if(hour<dist.size()-1)return -1;
        while(s<=e)
        {
            mid=(e-s)/2+s;
            if(check(mid,dist,hour))
                e=mid-1;
            else
                s=mid+1;
        }
        if(s>1e8) return -1;
        return s;
            
    }
};