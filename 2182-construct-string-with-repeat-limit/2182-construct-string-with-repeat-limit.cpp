class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {

vector<int>v(26,0);
for(auto i:s){
v[i-'a']++;
}
string k;
for(int i=25;i>=0;i--){
int count=0;
while(v[i]!=0){
if(count==repeatLimit){
int j=i-1;
while(j>=0&&v[j]==0){
j--;
}
if(j==-1) break;
k+='a'+j;
v[j]--;
count=0;
}
k+='a'+i;
v[i]--;
count++;
}
}
return k;
}
    
};