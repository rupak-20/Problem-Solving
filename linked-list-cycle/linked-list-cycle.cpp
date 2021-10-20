/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


//solution with time complexity = O(1)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *hare = head, *tor = head;

        while(hare && hare->next) {
            hare = hare->next->next;
            tor = tor->next;
            
            if(hare == tor)
                return true;
        }
        
        return false;
    }
};