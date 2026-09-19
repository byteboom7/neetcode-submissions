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
    bool hasCycle(ListNode* head) {
    if(head == nullptr || head->next == nullptr){
        return false;
    }
     ListNode* l1 = head;
     ListNode* l2 = head;
     while(l1 != nullptr && l1->next !=nullptr){
        l1 = l1->next->next;
        l2 = l2->next;
        if(l1==l2){
            return true;
        }
     }
     return false;
    }    
};
