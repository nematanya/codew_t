class Solution {
public:
    int nthUglyNumber(int n) {
     int m=INT_MAX;
        vector<int>v;
        for(long long i=1;i<m;i*=2)
        {
            for(long long j=i;j<m;j*=3)
            {
                for(long long k=j;k<m;k*=5)
                    v.push_back(k);
            }
        }
        sort(v.begin(),v.end());
        return v[n-1];
    }
};