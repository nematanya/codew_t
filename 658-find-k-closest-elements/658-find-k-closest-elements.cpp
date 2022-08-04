class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        for(auto it:arr)
        {
            pq.push({abs(it-x),it});
            if(pq.size()>k)
                pq.pop();
        }
        vector<int>ans;
while(pq.size())
{
    ans.push_back(pq.top().second);
    pq.pop();
}
        sort(ans.begin(),ans.end());
        return ans;
    }
};