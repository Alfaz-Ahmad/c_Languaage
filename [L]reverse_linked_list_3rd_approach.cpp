struct ListNode* mk_rev(struct ListNode* head){
    if(head->next == NULL){
        return head;
    }else{
        struct ListNode* temp = mk_rev(head->next), *sec = temp;
        while(sec->next!=NULL){
            sec = sec->next;
        }
        sec->next = head;
        head->next = NULL;
        return temp;
    }
}

struct ListNode* reverseList(struct ListNode* head) {
    if(!head){
        return head;
    }else if(!head->next){
        return head;
    }else{
        return mk_rev(head);
    }
}