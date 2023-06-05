class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
         if(c.size()==2) return true;
        int x1=c[0][0];
        int y1=c[0][1];
        int x2=c[1][0];
        int y2=c[1][1];
        
        for(int i=2;i<c.size();i++){
            int x=c[i][0];
            int y=c[i][1];
            if((x-x1)*(y2-y1)!=(y-y1)*(x2-x1)){
                return false;
            }
        }
      
        return true;
    }
};