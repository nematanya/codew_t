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
    int getDecimalValue(ListNode* head) {
       string s="";
        while(head)
        { s+=head->val;
            head=head->next;
        }
        int t=0;
    int ans=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            ans+=(pow(2,t)*s[i]);
            t++;
        }
        return ans;
    }
};