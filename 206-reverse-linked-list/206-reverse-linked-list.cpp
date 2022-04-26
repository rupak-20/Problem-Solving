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
        if(!head)
            return head;
        
        ListNode *prev = NULL, *lead, *itr;
        lead = head;
        itr = head;
        
        while(itr != nullptr) {
            lead = lead->next;
            itr->next = prev;
            
            prev = itr;
            itr = lead;
        }
        
        return prev;
    }
};