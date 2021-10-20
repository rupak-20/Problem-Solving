/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *heada, ListNode *headb) {
        ListNode *ptr = heada;
        unordered_map<ListNode*, int> c;
        
        while(ptr) {
            c[ptr] = 1;
            ptr=ptr->next;
        }
        
        ptr = headb;
        
        while(ptr) {
            if(c.find(ptr) != c.end()) {
                return ptr;
            }
            
            ptr = ptr->next;
        }
        
        return NULL;
    }
};