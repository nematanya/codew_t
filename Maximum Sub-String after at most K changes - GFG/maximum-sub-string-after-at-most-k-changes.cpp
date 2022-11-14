//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int characterReplacement(string s, int k){
		    // Code here
		    int n=s.length();
		    vector<int> v(26,0);
		        int i=0,j=0,maxfreq=0,maxlen=0;
		        while(j<n)
		        {
		            v[s[j]-'A']++;
		            maxfreq=max(maxfreq,v[s[j]-'A']);
		            if((j-i+1)-maxfreq>k)
		            {  v[s[i]-'A']--;
		             i++;   
		            }
		           else 
		           maxlen=max(maxlen,j-i+1);
		           
		            j++;
		        }
		        return maxlen;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends