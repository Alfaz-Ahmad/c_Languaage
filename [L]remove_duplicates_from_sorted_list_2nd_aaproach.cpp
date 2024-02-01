struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(!head || !head->next){
        return head;
    }else{
        struct ListNode* slow = head, *fast = head->next;
        while(fast){
            if(fast->val != slow->val){
                slow->next = fast;
                slow = slow->next;
            }
            fast=fast->next;
        }
        slow->next = NULL;
        return head;
    }
}