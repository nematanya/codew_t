//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
      int removeStudents(int H[], int N) {

        // code here

        vector<int>temp;

        for(int i=0;i<N;i++){

            if(temp.size()==0){

                temp.push_back(H[i]);

                continue;

            }

            else if(temp.back()<H[i]){

               temp.push_back(H[i]); 

            }

            else{

                int it=lower_bound(temp.begin(),temp.end(),H[i])-temp.begin();

                temp[it]=H[i];

            }

        }

        return N-temp.size();

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}
// } Driver Code Ends