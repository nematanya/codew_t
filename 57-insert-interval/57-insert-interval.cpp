class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& ni) {
        intervals.push_back(ni);
        sort(intervals.begin(), intervals.end());
        for(auto it:intervals)
        {
            cout<<it[0]<<" "<<it[1]<<endl;
        }
        int start=intervals[0][0], end=intervals[0][1], n=intervals.size();
        vector<vector<int>> ans;
        for(int i=1; i<n; i++) {
            if(end>=intervals[i][0])
                end = max(end, intervals[i][1]);
            else {
                ans.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        ans.push_back({start, end});
        return ans;
    }
};