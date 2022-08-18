class Solution {
public:
    int minSetSize(vector<int>& arr) {
       map<int,int> mp;
        int n=arr.size()/2;
        for(auto it: arr)
            mp[it]++;
        priority_queue<int> pq;
        for(auto it :mp)
        {
         pq.push(it.second);
        }
        int count=0;
       while(pq.size())
        {
            if(n<=0) break;
            n=n-pq.top();
            pq.pop();
            count++;
        }
        
        return count;
    }
};