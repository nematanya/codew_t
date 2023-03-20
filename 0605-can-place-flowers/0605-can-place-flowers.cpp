class Solution {
public:
    bool canPlaceFlowers(vector<int>& ara, int n) {
        for(int i=0;i<ara.size() && n;i++){
            if(i+1<ara.size() && ara[i]==0 && ara[i+1]==0){
                if(i-1>=0){
                    if(ara[i-1]==0)ara[i]=1,n--;
                }
                else{
                    ara[i]=1,n--;
                }
            }
        }
        if(ara.size()==1){
            if(ara[0]==0 && n)ara[0]=1,n--;
        }
        else if(ara.size()>=2 && ara[ara.size()-1]==0 && ara[ara.size()-2]==0 && n){
            ara[ara.size()-1]=1;
            n--;
        }
        if(n)return false;
        return true;
    }
};