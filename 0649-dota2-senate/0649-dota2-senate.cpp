class Solution {
public:
    string predictPartyVictory(string senate) {
        int count=0;
       for(int i=0;i<senate.size();i++){
           if(senate[i]=='R'){
               if(count<0){
                   senate+='D';
               }
               count++;
           }
           else{
               if(count>0){
                   senate+='R';
               }
               count--;
           }
       }
       return count>0?"Radiant":"Dire";
    }
};