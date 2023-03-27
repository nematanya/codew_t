class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s=1,e=1e9;
        int mid;
        int res=0;
        while(s<=e)
        {
            mid=(e-s)/2+s;
            long long int k=0;
            for(auto it:nums)
            { 
            if(mid==0) break;
                if(it%mid==0)
                k+=(it/mid);
             else
                k+=(it/mid)+1; 
            }
            if(k>threshold)
                 s=mid+1;
            else
            {res=mid;
                 e=mid-1;}
        }
        return res;
    }
};