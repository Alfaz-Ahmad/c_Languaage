/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(!head){
        return head;
    }else{
        struct ListNode* prev = NULL, *curr = head, *next = head->next;
        while(curr){
            curr->next = prev;
            prev = curr;
            curr = next;
            if(next){
                next = next->next;
            }
        }
        head = prev;
        return head;
    }
}