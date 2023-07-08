class Solution {
public:
    int maxConsecutiveAnswers(string ans, int k) {
     int i=0,j=0,t=k,res=INT_MIN,n=ans.size();
        while(j<n)
        {
         if(ans[j]=='F' )
             t--;
            if(t<0)
            { while(i<j and t<0)
            {
                
                if(ans[i]=='T')
                    i++;
                else {
                    t++;
                    i++;
                }
            }
            }
            
           
             res=max(res,j-i+1);
            j++;
        }
        i=0;j=0; t=k;
          while(j<n)
        {
         
         if(ans[j]=='T' )
         {
             t--;
         }
            if(t<0)
            { 
            while(i<j and t<0)
            {
                
                if(ans[i]=='F')
                    i++;
                else {
                    t++;
                    i++;
                }
            }
            }
            res=max(res,j-i+1);
              j++;
        }  
        return res;
    }
};