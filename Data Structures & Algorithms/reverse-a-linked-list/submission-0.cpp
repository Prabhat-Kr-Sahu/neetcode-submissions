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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr ){
            return head;
        }
        ListNode* t1 = (head-> next ? head->next : nullptr);
        ListNode* t = head;
        t->next = nullptr;
       
        while(t1 != nullptr){
            head = t1;
            t1 = (head-> next ? head->next: nullptr);
            head->next = t;
            t = head;
        }
        return head;
    
    }
};
