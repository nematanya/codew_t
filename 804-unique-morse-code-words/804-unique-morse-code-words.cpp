class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> ans;
        vector<string> v= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(auto it:words)
        {  string s="";
            for(int i=0;i<it.size();i++)
            {  s+=v[it[i]-'a'];
        }
        ans.insert(s);
    }
        return ans.size();
    } 
};