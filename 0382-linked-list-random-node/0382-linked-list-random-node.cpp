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
    int size = 0 ;
    ListNode* h = nullptr ;
    Solution(ListNode* head) {
        h = head ;
        ListNode* tmp = head ;
        size=0 ;
        while(tmp!=nullptr){
            size++;
            tmp = tmp->next ;
        }
    }
    
    int getRandom() {
        int r =  0+ (rand() % size) ;
        ListNode* tmp = h ;
        for(int i = 0 ; i < r ; i++){
            tmp = tmp->next ;
        }
        return tmp->val ;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */