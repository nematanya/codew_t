class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int ans=0,n=people.size();
        int i=0,j=n-1;
        // while(people[j]>=limit)
        // {
        //     ans++;
        //     j--;
        // }
        while(i<j)
        {
            if( people[i]+people[j]>limit)
            {
                ans++;
                j--;
            }
            else if(people[i]+people[j]<=limit)
            {ans++;
            i++;
            j--;}
              
        }
          if(i==j) ans++;
        return ans;
    }
};