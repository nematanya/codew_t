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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL or head->next==NULL) return head;
        int n=0;
        ListNode* temp=head;
        while(temp)
        {
            n++;
            temp=temp->next;
        }
        int t=n-k;k--;
        ListNode* temp1=head;
        ListNode* temp2=head;
        while(k--)
        temp1=temp1->next;
        while(t--)
        temp2=temp2->next;
        int data1=temp1->val;
        int data2=temp2->val;
        temp1->val=data2;
        temp2->val=data1;

    return head;
    }
};