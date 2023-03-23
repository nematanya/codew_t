class Solution {
public:
    string strWithout3a3b(int a, int b) {
          string res="";
         priority_queue<pair<int,char>> pq;
      if(a)  pq.push({a,'a'});
      if(b)  pq.push({b,'b'});

        while(pq.size()==2)
        {
        auto it=pq.top();
            pq.pop();
        int t1=it.first;
        char d1=it.second;
            if(t1>=2)
            { res+=d1;
            res+=d1;
            t1-=2;}
            else
            {
                res+=d1;
                t1-=1;
            }
            auto ik=pq.top();
            pq.pop();
            int t2=ik.first;
            char d2=ik.second;
            if(t2>t1 and t2>=2)
            {
                res+=d2;
                res+=d2;
                t2-=2;
            }
            else
            {
                res+=d2;
                t2-=1;
            }
            if(t1>0)
            pq.push({t1,d1});
            if(t2>0)
            pq.push({t2,d2});
        }
        if(pq.empty())
            return res;
        else
        {
            auto it=pq.top();
            int d=it.first;
            char c=it.second;
            if(d>=2)
            {
                res+=c;
                res+=c;
            }
            else 
                res+=c;
        }
        return res;
    }
};