struct ListNode* mk_rvs(struct ListNode* head, struct ListNode** new_head){
    if(head->next == NULL){
        *(new_head) = head;
        return head;
    }else{
        struct ListNode* temp = mk_rvs(head->next, new_head);
        temp->next = head;
        return head;
    }
}

struct ListNode* reverseList(struct ListNode* head) {
    if(!head){
        return head;
    }else if(!head->next){
        return head;
    }else{
        struct ListNode* new_head = NULL, *curr;
        curr = mk_rvs(head, &new_head);
        curr->next = NULL;
        return new_head;
    }
}