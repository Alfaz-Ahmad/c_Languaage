struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(!head || !head->next){
        return head;
    }else{
        struct ListNode* temp = head, *prev = head, *curr = head->next;
        while(curr){
            if(prev->val != curr->val){
                temp->next = curr;
                temp = temp->next;
            }
            prev = curr;
            curr = curr->next;
        }
        temp->next = NULL;
        return head;
    }
}