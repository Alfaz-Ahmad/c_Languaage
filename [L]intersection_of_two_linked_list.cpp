/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *temp1 = headA;
    while(temp1!=NULL){
        struct ListNode *temp2 = headB;
        while(temp2!=NULL){
            if(temp1 == temp2){
                return temp1;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    return NULL;
}