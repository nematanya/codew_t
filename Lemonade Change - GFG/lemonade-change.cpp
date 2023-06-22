//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int n, vector<int> &b) {
        // code here
         vector<int>v(21,0);
         for(int i=0;i<n;i++)
         {
             if(b[i]==5) 
             v[5]++;
             else if(b[i]==10)
             {
                 if(v[5]>0)
                 {
                     v[5]--;
                     v[10]++;
                 }
                 else 
                 return false;
             }
             else if(b[i]==20)
             {
                 if(v[10]>0 and v[5]>0)
                 {
                  v[10]--;
                  v[5]--;
                  v[20]++;
                 }
              else if(v[5]>3)
                 {
                     v[5]-=3;
                     v[20]++;
                     
                 }
                 else return false;
             }
         }
         return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends