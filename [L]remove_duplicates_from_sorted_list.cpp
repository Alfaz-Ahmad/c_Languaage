/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(!head || !head->next){
        return head;
    }
    struct ListNode* temp1 = head->next, *temp2, *prev = head;
    bool dupli;
    while(temp1){
        dupli = false;
        temp2 = head;
        while(temp2 != temp1){
            if(temp1->val == temp2->val){
                dupli = true;
                break;
            }
            temp2 = temp2->next;
        }
        if(!dupli){
            prev->next = temp1;
            prev = prev->next;
        }
        temp1 = temp1->next;
    }
    prev->next = NULL;
    return head;
}