/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    if(!l1){
        return l2;
    }else if(!l2){
        return l1;
    }else{
        struct ListNode* head=NULL, * temp; 
        int sum = 0, carry = 0;
        while(l1 || l2){
            struct ListNode* new = (struct ListNode*)malloc(sizeof(struct ListNode));
            new->next = NULL;
            sum = carry;
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
            new->val = sum%10;
            carry = sum/10;
            if(!head){
                head = new;
                temp = head;
            }else{
                temp->next = new;
                temp = temp->next;
            }
        }
        if(carry){
            struct ListNode* new = (struct ListNode*)malloc(sizeof(struct ListNode));
            new->next = NULL;
            new->val = 1;
            temp->next = new;
        }
        return head;
    }
    assert(false);
}