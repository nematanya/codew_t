class Solution {
    
public:
    void sett(int ind,  vector<vector<int>> &ans,vector<int> &arr,vector<int> &ds,int target)
    {
        if(target==0)
        {ans.push_back(ds);
        return;
        }
        for(int i=ind;i<arr.size();i++)
        {
            if(i>ind and arr[i]==arr[i-1]) continue; //to avoid same set ,if you avoid particular ele,avoid all its reoccurance
            if(target<arr[i]) break;
            ds.push_back(arr[i]);
            sett(i+1,ans,arr,ds,target-arr[i]);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        sett(0,ans,candidates,ds,target);
        return ans;
    }
};