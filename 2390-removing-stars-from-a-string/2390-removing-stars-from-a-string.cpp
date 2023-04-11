class Solution {
public:
    string removeStars(string s) {
       stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty() and s[i]!='*') st.push(s[i]);
           else if(s[i]=='*') 
               st.pop();
            else
                st.push(s[i]);
        }
        string res="";
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};