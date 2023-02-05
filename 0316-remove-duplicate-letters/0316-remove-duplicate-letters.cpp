class Solution {
public:
    string removeDuplicateLetters(string s) {
    string ans="";
        vector<int>last(26,0);
        vector<bool>c(26,false);
        for(int i=0;i<s.length();i++)
        {
            last[s[i]-'a']=i;
        }
        stack<char>st;
        for(int i=0;i<s.length();i++)
        { if(c[s[i]-'a'] ==true) continue;
            if(st.empty()){ st.push(s[i]);
                            c[s[i]-'a']=true; }
            else if(st.top()>s[i]){
                while(!st.empty() and( st.top()>s[i]) and (last[st.top()-'a']>i)){
                c[st.top()-'a']=false;
                st.pop();
                }
                if(c[s[i]-'a'] ==false)
                {st.push(s[i]);
                 c[s[i]-'a']=true;
                }
                else continue;
                
        }
            else
            {
             if(c[s[i]-'a'] ==false)
                {st.push(s[i]);
                 c[s[i]-'a']=true;
                }
}
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};