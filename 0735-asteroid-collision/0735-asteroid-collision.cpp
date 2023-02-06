class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>s;
        
        for(auto it:a)
        {
            if(s.empty() or it>0) s.push(it);
            else {
                while( !s.empty() and s.top()>0 and s.top()<abs(it))
            s.pop();
                if(!s.empty() and s.top()==abs(it))
                    s.pop();
                else if(s.empty() or s.top()<0)
                    s.push(it);
                
                    }
            
        }
        vector<int>ans;
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};