class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int i=a.length()-1;
        int j=b.length()-1,carry=0;
        while(i>=0 or j>=0)
        {  int sum=carry;
            if(i>=0){sum+=a[i]-'0';
                    i--;}
         if(j>=0){sum+=b[j]-'0';
         j--;}
         if(sum>1)carry=1;
         else
             carry=0;
         res+=to_string(sum%2);
        }
        if(carry)res+=to_string(carry);
        reverse(res.begin(),res.end());
        return res;
    }
};