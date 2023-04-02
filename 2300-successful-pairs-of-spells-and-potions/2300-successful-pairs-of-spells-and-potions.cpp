class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long success) {
        sort(p.begin(),p.end());
        vector<int>ans;
        for(int i=0;i<s.size();i++)
        {
            long long t=s[i];
            int start=0,e=p.size()-1,mid;
            while(start<=e)
            { mid=(e-start)/2+start;
                if((long long)(s[i])*(long long)p[mid]>=success)
                    e=mid-1;
             else
                 start=mid+1;
            }
            ans.push_back(p.size()-e-1);
        }
        return ans;
    }
};