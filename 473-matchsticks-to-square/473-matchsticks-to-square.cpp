class Solution {
public:
    int a,b,c,d;
    bool sides(vector<int> &t,int i){
        if(i==t.size())
        {
            if(a==0 and b==0 and c==0 and d==0) return true ;
                else return false;
        }
         if(a>=t[i]){
            a-=t[i];
            if(sides(t,i+1)) return true;
            a+=t[i];
        }
        if(b>=t[i]){
            b-=t[i];
            if(sides(t,i+1)) return true;
            b+=t[i];
        }
        if(c>=t[i]){
            c-=t[i];
            if(sides(t,i+1)) return true;
            c+=t[i];
        }
        if(d>=t[i]){
            d-=t[i];
            if(sides(t,i+1)) return true;
            d+=t[i];
        }
        
        return false;
    }
    bool makesquare(vector<int>& matchsticks) {
        if(matchsticks.size()<4 ) return false;
        int sum=accumulate(matchsticks.begin(),matchsticks.end(),0);
        if(sum%4!=0) return false;
        else a=b=c=d=sum/4;
         sort(matchsticks.rbegin(), matchsticks.rend());
        return sides(matchsticks,0);
    }
};