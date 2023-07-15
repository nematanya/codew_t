//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void sol(stack<int>&s,int pos,int count)
    {
        if(s.size()==0) return;
        if(pos==count)
        {s.pop();
        return;}
        
        int t=s.top();
        s.pop();
        sol(s,pos,count+1);
        s.push(t);
    }
    void deleteMid(stack<int>&s, int n)
    {
        // code here.. 
        if(s.empty()==true) return;
        int pos=ceil((n+1)/2.0);
        sol(s,pos,1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends