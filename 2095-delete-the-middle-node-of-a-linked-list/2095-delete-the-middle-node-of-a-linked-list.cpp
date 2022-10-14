/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return NULL;
        int n=1;
        ListNode* temp=head;
        while(temp->next!=NULL)
        {
            n++;
            temp=temp->next;
        }
        cout<<n<<endl;
        int i=1;
        if(n&1)
        {n=n/2;
        n+1;}
        else
        n=n/2;
        ListNode* t=head;
        while(i<n and t!=NULL)
        {
            t=t->next;
            i++;
        }
        t->next=t->next->next;
        return head;
    }
};