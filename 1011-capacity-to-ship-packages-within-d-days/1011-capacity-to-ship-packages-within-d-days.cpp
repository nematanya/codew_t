class Solution {
public:
    int shipWithinDays(vector<int>& w, int days) {
        int e=accumulate(w.begin(),w.end(),0);
        if(days==1) return e;
        int s=*max_element(w.begin(),w.end());
        int mid=0;
        int res=0;
        while(s<=e)
        {
            int mid=(e-s)/2+s;
            int t=1;
            int temp=0;
            for(auto it:w) 
            {
                if(temp+it>mid)
                {
                    t++;
                    temp=0;
                }
                temp=temp+it;
            }
            if(t<=days)
            { 
              res=mid;
              e=mid-1;
            } 
            else
            s=mid+1;   
        }
        return s;
    }
};