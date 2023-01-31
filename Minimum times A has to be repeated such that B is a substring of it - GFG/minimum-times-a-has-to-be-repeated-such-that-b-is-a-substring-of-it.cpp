//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minRepeats(string a, string b) {
        // code here
 vector<int> v(26,0);
  string ans=a;
  int cnt=1;
  while(ans.size()<b.size())
  {
      ans+=a;
      cnt++;
  }
  if(ans.find(b)!=-1)
  return cnt;
  ans+=a;cnt++;
  if(ans.find(b)!=-1)
  return cnt;
  return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends