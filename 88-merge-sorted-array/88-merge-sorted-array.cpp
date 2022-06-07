class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        if(m==0 ) {nums1=nums2;return ;}
        else if(n==0) return ;
        else{  int i=(m+n-1);
             int t=m-1;
             int y=n-1;
       while(i>=0 and t>=0 and y>=0)
       {   
           if(nums1[t] >=nums2[y]){
               nums1[i]=nums1[t];
               i--;
               t--;
           }
           else{ 
               nums1[i]=nums2[y];
               i--;
               y--;
               
           }
       }
            if(t>=0)
            {
                while(i>=0) nums1[i--]=nums1[t--];
            }
             if(y>=0)
            {
                while(i>=0) nums1[i--]=nums2[y--];
            }
            }
    }
};