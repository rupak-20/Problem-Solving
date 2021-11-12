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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(!head) return head;
        
        if(head->val == val) return removeElements(head->next, val);
        
        ListNode* itr = head;
        
        while(itr && itr->next){
            if(itr->next->val == val){
                itr->next = itr->next->next;
            } else itr = itr->next;
        }
        
        return head;
    }
};