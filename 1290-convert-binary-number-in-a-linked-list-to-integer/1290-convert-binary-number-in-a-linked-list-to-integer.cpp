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
        int res = 0, counter = 0;
        string binary;
        
        while(head) {
            binary += to_string(head->val);
            head = head->next;
        }

        for(int i=binary.length()-1; i>=0; i--) {
            if(binary[i] == '1')
                res += pow(2, counter);
            counter++;
        }
        
        return res;
    }
};