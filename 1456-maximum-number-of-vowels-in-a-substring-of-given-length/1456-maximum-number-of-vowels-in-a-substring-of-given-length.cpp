class Solution {
public:
    int maxVowels(string s, int k) {
        vector<char>v{'a','e','i','o','u'};
        int i=0,j=0;
        int n=s.size();
        int count=0;
        int ans=INT_MIN;
        while(j<n)
        {  
             if(find(v.begin(),v.end(),s[j])!=v.end())
            {
                count++;   
            }
             if((j-i+1)==k) {
                ans=max(ans,count);
                 if(find(v.begin(),v.end(),s[i])!=v.end())
                 {
                     count--;
                     i++;
                 }
                 else i++;
             }
           j++;
        }
        return ans;
    }
};