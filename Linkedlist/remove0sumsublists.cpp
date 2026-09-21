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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        int prefix_sum = 0;
        unordered_map<int, ListNode*> seen;
        
        ListNode* curr = dummy;
        while (curr != nullptr) {
            prefix_sum += curr->val;
            seen[prefix_sum] = curr;
            curr = curr->next;
        }
        
        prefix_sum = 0;
        curr = dummy;
        while (curr != nullptr) {
            prefix_sum += curr->val;
            curr->next = seen[prefix_sum]->next;
            curr = curr->next;
        }
        
        return dummy->next;
    }
};