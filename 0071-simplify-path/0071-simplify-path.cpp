class Solution {
public:
    string simplifyPath(string path) {
        string ans;
        string file="";
        int i=0;
        int n=path.size();
        while(i<n){
            if(path[i]=='/'){
                if(ans.size() && ans.back()=='/') i++;
                else ans+='/';
            }
            else if(path[i]=='.' && (i+1==n || path[i+1]=='/')) i++;
            else if(path[i]=='.' && i+1<n && path[i+1]=='.' && (i+2==n || path[i+2]=='/')){
                i+=2;
                if(ans.size()>1) ans.pop_back();
                while(ans.size() && ans.back()!='/') ans.pop_back();
            }
            else{
                while(i<n && path[i]!='/') file+=path[i++];
                ans+=file;
            }
            file="";
        }
        if(ans.size()>1 && ans.back()=='/') ans.pop_back();
        return ans;
    }
};