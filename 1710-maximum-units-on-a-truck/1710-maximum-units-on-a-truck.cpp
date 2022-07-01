class Solution {
public:
   static bool f(vector<int>& a, vector<int>& b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
sort(boxTypes.begin(),boxTypes.end(),f);
    int ans=0;
        for(auto it: boxTypes)
        { if(truckSize<=0) break;
            int x=min(it[0],truckSize);
            ans+=x*it[1];
            truckSize-=x;
        }
     return ans;
    }
};