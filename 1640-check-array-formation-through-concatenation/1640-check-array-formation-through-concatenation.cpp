class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
      map<int,vector<int>>mp;
        for(auto it:pieces)
            mp[it[0]]=it;
        vector<int>res;
        int i=0;
        while(i<arr.size())
        {  if(mp.find(arr[i])!=mp.end()){
            vector<int> temp=(mp[arr[i]]);
            for(auto it:temp)
                res.push_back(it);
        
            i+=temp.size();}
         
             else i++;
         
        }
        return res==arr;
    }
};