class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        int i=n-1;
        // while(i>=0)
        // {
        //     ans=10*ans+num[i];
        //     i--;
        // }
        // cout<<ans;
        vector<int>res;
        vector<int>ans;
        while(k)
        {
            res.push_back(k%10);
            k=k/10;
        }
        reverse(res.begin(),res.end());
        int carry=0,j=res.size()-1;
        while(i>=0 or j>=0)
        { int sum=carry;
            if(i>=0) sum+=num[i--];
         if(j>=0) sum+=res[j--];
         carry=sum/10;
         ans.push_back(sum%10);
        }
        if(carry!=0) ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};