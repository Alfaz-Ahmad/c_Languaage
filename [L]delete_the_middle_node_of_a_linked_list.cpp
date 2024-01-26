/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    struct ListNode* slow = head, *fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    if(slow == head){
        return NULL;
    }else if(slow == head->next && !slow->next){
        head->next = NULL;
        return head;
    }else{
        slow->val = slow->next->val;
        slow->next = slow->next->next;
        return head;
    }
}