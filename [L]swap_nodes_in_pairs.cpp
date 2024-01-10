/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode* parent =NULL, *curr = head, *next;
        
        while(true){
            if(!curr){
                return head;
            }else{
                next = curr->next;
            }
            if(!next){
                return head;
            }
            curr->next = next->next;
            next->next = curr;
            if(!parent){
                head = next;
            }else{
                parent->next = next;
            }
            parent = curr;
            curr = curr->next;
        }
        assert(false);
}