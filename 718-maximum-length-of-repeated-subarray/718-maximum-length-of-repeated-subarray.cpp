class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int ans=0;
     for(int i=0;i<nums1.size();i++)
     {
         for(int m=i, n=0;m<nums1.size() and n<nums2.size();)
         {  int count=0;
                 while( m<nums1.size() and n<nums2.size() and nums1[m++]==nums2[n++] )
                        count++;
              ans=max(ans,count);
         }
     }
           for(int i=0;i<nums2.size();i++)
     {
         for(int m=i, n=0;m<nums2.size()and n<nums1.size();)
         {   int count=0;
                 while( m<nums2.size() and n<nums1.size() and nums1[n++]==nums2[m++] )
                        count++;
              ans=max(ans,count);
         }
     }
        return ans;
    }
};