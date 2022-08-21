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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* prev=list1;
        ListNode* curr;
        while(a)
        {
            curr=prev;
            prev=prev->next;
        a--;}
        ListNode* nex=list1;
        while(b)
        { nex=nex->next;
         b--;}
        nex=nex->next;
        curr->next=list2;
        ListNode* temp=list1;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=nex;
        return list1;
        
    }
};