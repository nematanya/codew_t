class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(auto path:paths){
            
            string temp ="";
            
             for(int i=0;i<path.size();i++){
                 
            string s2="";    
            string fname ="";
             bool flag = false;
                 
           if(path[i] == ' '){
        
                while(path[++i]!='(')s2+=path[i];
             
                while(path[i]!=')'){
                    if(path[i]!='(')
                    fname+=path[i];
                    i++;
                }
               
              flag =true;
             }
         else  temp+=path[i];
                 
                   if(flag)
                     mp[fname].push_back(temp +"/"+ s2);
                
            }
        
        }
        
        for(auto m:mp){
            if(m.second.size()>1){
                ans.push_back(m.second);
            }
        }
        
        return ans;
       
    }
};