class Solution {
public:
    string reverseWords(string s) {
      vector<string> ans;
        for(int i=0;i<s.length();i++)
        {
            string t="";
            while(i<s.length() and s[i]!=' ')
            {  t+=s[i]; 
             i++;}
            reverse(t.begin(),t.end());
            ans.push_back(t);
            // ans.push_back(" ");

        }
        string res="";
        for(int i=0;i<ans.size();i++)
        { res+=ans[i];
         if(i!=ans.size()-1)
        res+=" ";}
        return res;
    }
};