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
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head->next==nullptr){
            return nullptr;
        }
        //Method 1: Optimal: Using Hare & Tortoise Algorithm: O(n):
        ListNode* slow=head;
        ListNode* fast=head;
                                //Skipped moving slow ptr once.
        fast=fast->next->next;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
            ListNode* middle=slow->next;
            slow->next=slow->next->next;
            delete middle;
        return head;
        
        // //Method 2: Brute Force: O(n+n/2)
        // ListNode* temp=head;
        // int n=0;
        // while(temp!=nullptr){
        //     n++;
        //     temp=temp->next;
        // }
        // int res=n/2;
        // temp=head;
        // while(temp!=nullptr){
        //     res--;                  //Points to previous of middle node
        //     if(res==0){
        //         ListNode* middle=temp->next;
        //         temp->next=temp->next->next;
        //         delete middle;
        //         break;
        //     }
        //     temp=temp->next;
        // }
        // return head;
    }
};