/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode* fast = head, *last = NULL, *prev = NULL;
    while(fast){
        if(fast->val < x){
            if(last){
                if(!prev){                        
                    last->next  = fast->next;
                    fast->next = head;
                    head = fast;
                    prev = head;
                }else{
                    last->next = fast->next;
                    fast->next = prev->next;
                    prev->next = fast;
                    prev = fast;
                }        
            }else{
                prev = head;
            }
        }
        last = fast;
        fast = fast->next;
    }
    return head;  
}