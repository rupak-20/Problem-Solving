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
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
                
        ListNode *sorted = nullptr, **link = &sorted;
        
        while(l1 && l2) {
            
            if(l1->val < l2->val) {
                *link = l1;
                l1 = l1->next;
            }
        
            else {
                *link = l2;
                l2 = l2->next;
            }
            link = &(*link)->next;
        }
        
        if(l1)
            *link = l1;
        
        if(l2)
            *link = l2;
        
        return sorted;
    }
};