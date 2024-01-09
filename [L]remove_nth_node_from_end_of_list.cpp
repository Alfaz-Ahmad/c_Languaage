/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int len = 0, i = 0;
    struct ListNode* temp = head, *parent = NULL;
    while(temp){
        len++;
        temp = temp->next;
    }
    temp = head;
    while(len-i != n){
        i++;
        parent = temp;
        temp = temp->next;
    }
    if(!parent){
        return temp->next;
    }else{
        parent->next = temp->next;
    }
    return head;
}