struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    if(left == right){
        return head;
    }else{
        struct ListNode* curr = head, *prev = NULL, *rev = NULL, *next, *last = NULL;
        int pos = 1;
        while(pos != left){
            prev = curr;
            curr = curr->next;
            pos++;
        }
        next = curr->next;
        while(pos <= right && curr){
            if(rev == NULL){
                curr->next = NULL;
                last = curr;
                rev = curr;
            }else{
                curr->next = rev;
                rev = curr;
            }
            curr = next;
            if(next){
                next = next->next;
            }
            pos++;
        }
        if(prev){
            last->next = curr;
            prev->next =  rev;
        }else{
            head = rev;
            last->next = curr;
        }
        return head;            
    }
}