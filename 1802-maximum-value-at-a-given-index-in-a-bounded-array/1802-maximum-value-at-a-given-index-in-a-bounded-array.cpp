class Solution {
public:
    int maxValue(int n, int index, int maxsum) {
        long long l=index;
        long long r=n-index-1;
        long long low=1;
        long long high=maxsum;
        long long res=0;
        while(low<=high)
        {
            long long mid=(high-low)/2+low;
            long long sum=mid;
            long long ls=0,rs=0,m=mid-1;
            if(r<=m)
                rs=m*(m+1)/2-(m-r)*(m-r+1)/2;
                else
                    rs=(m*(m+1)/2)+(r-m)*1;
              if(l<=m)
                ls=(m*(m+1)/2)-((m-l)*(m-l+1)/2);
                else
                    ls=m*(m+1)/2+(l-m)*1;
            sum+=ls+rs;
            if(sum<=maxsum)
            {
                res=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return res;
    }
};