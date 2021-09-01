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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(!head)
            return head;
        
        ListNode *n = head, *last;
        last = n;
        n = n->next;
        
        while(n) {
            if(last->val != n->val) {
                last->next = n;
                last = last->next;
            }            
            n = n->next;
        }
        last->next = NULL;
        
        return head;
    }
};