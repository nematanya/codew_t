class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) 
    {
        int n = stations.size();
        int Fuel = startFuel;   
        int ans = 0;
        priority_queue<int> pq; 
        
        int i;  
        for(i = 0; i < n; ++i)
        { 
            if(stations[i][0] <= Fuel)
                pq.push(stations[i][1]);
            else
                break;
        }
        
        while(Fuel < target && !pq.empty())
        {
            Fuel += pq.top();   
            ++ans;
            pq.pop();
            
            for(; i < n; ++i)
            {
                if(stations[i][0] <= Fuel)
                    pq.push(stations[i][1]);
                else
                    break;
            }
        }
        
        if(Fuel < target)
            return -1;
        
        return ans;
    }
};