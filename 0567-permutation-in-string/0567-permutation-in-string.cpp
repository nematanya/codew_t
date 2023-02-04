class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        int w=s1.length(),n=s2.length();
        int i=0,j=w-1;
        while(j<n)
        {
          string temp=s2.substr(i,w);
            sort(temp.begin(),temp.end());
            if(s1==temp) return true;
            i++;j++;
            
        }
        return false;    
    }
};