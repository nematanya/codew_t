//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//function Template for C++

//Function to reverse the queue.
class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        // stack <int>s;
        // for(auto it:q)
        // {
        //     s.push(it);
        // }
        // q.clear();
        // for(auto it:s)
        // q.push(it);
        // return q;
        stack<int>s;
        queue<int>res;
        while(q.empty()==false)
        {
            s.push(q.front());
            q.pop();
            
        }
        while(!s.empty()){
        res.push(s.top());
        s.pop();}
        return res;
    }
};


//{ Driver Code Starts.
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    Solution ob;
    queue<int> a=ob.rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends