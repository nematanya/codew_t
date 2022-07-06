class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>s;
        vector<int> ans;
        int n=nums.size();
        for(int i=2*n-1;i>=0;i--)
        {
            while(s.empty()==false and s.top()<=nums[i%n])
                s.pop();
            if(i<n){
            if(s.empty()==false)
               ans.push_back(s.top());
            else 
                ans.push_back(-1);}
                s.push(nums[i%n]);
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};