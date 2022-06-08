class Solution {
public:
     void per(vector<vector<int>> &ans, vector<int> &temp,int n,bool mp[],vector<int>& nums)
     {
             if(temp.size()==n) 
        { ans.push_back(temp);
         return;
         }
         for(int i=0;i<n;i++)
         {
             if(!mp[i])
             { temp.push_back(nums[i]);
             mp[i]=1;
             per(ans,temp,n,mp,nums);
             mp[i]=0;
             temp.pop_back();   }
         }
     }
    vector<vector<int>> permute(vector<int>& nums) {
         int n=nums.size();
         vector<vector<int>>ans;
        vector<int> temp;
        bool mp[n];
        for(int j=0;j<n;j++) mp[j]=0;
        per(ans,temp,n,mp,nums);
        return ans;
    }
};