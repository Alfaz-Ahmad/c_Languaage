struct ListNode* reverseList(struct ListNode* head){
    if(!head){
        return NULL;
    }else{
        struct ListNode* rev = NULL, *next = head->next;
        while(head){
            if(!rev){
                head->next = NULL;
                rev = head;
            }else{
                head->next = rev;
                rev = head;
            }
            head = next;
            if(next){
                next = next->next;
            }
        }
        return rev;
    }
}