class Solution {
public:
 long long makeSubKSumEqual(vector<int>& arr, int k) {
 long long n=arr.size(),ans=0;
     for(int i=0;i<k;++i)
     {
         vector<int>t;
         for(int j=i;arr[j]!=0;j=(j+k)%n)
         {
             t.push_back(arr[j]);
             arr[j]=0;
         }
      sort(t.begin(),t.end());
      long long m;
      for(auto it:t)
          ans+=abs(it-t[(t.size()/2)]);
     }
     return ans;
}
};