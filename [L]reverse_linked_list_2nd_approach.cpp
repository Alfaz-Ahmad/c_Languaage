/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* rev(struct ListNode* pre, struct ListNode* curr){
    if(!curr){
        return pre;
    }
    struct ListNode* temp = curr->next;
    curr->next = pre;
    return rev(curr, temp);
}

struct ListNode* reverseList(struct ListNode* head) {
    if(!head){
        return NULL;
    }else{
        struct ListNode* parent = NULL;
        return rev(parent, head);
    }
}