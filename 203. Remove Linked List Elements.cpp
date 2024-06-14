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
        ListNode* temp = new ListNode();
        temp->next = head;
        ListNode* current = temp;
        
        while (current->next) {
            if (current->next->val == val) {
                ListNode* element = current->next;
                current->next = current->next->next;
                delete element;
            } else {
                current = current->next;
            }
        }
        return temp->next;
    }
};