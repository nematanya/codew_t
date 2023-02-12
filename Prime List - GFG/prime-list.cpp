//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/
bool isprime(int n)
{
   if(n==1) return false;
   for(int i=2;i*i<=n;i++)
{
    if(n%i==0)
    return false;
}
return true;
   
}
int close(int n)
{
    if(n==1) return 2;
    int i=n-1,j=n+1;
    while(i>1)
    {
        if(isprime(i))
        return i;
        if(isprime(j))
        return j;
        i--;
        j++;
    }
    return 0;
}

class Solution{
public:
    Node *primeList(Node *head){
        Node* temp=head;
        while(temp!=NULL)
        {
            if(isprime(temp->val)==false)
            {
                temp->val=close(temp->val);
            }
            temp=temp->next;
    }
    return head;}
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends