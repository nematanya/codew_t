class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        for(int i=0, j=m[0].size()-1; i<m.size() && j>=0; ){
            if(m[i][j] < t)i++;
            else if(m[i][j] > t)j--;
            else return true;
        }
        return false;
    }
};
