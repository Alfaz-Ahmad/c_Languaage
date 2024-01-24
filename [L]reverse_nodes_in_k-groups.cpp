/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverse(struct ListNode* head){
    struct ListNode *rev = NULL, *next = head->next;
    while(head){
        if(!rev){
            rev = head;
            rev->next = NULL;
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

struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    struct ListNode* curr = head, *temp, *prev = NULL, *new_head = NULL;
    while(curr){
        int times = k;
        struct ListNode* next = curr->next, *rev = NULL, *last = curr;
        while(times && curr){
            if(!rev){
                curr->next = NULL;
                rev = curr;
            }else{
                curr->next = rev;
                rev = curr;
            }
            curr = next;
            if(next){
                next = next->next;
            }
            times--;
        }
        if(times == 0){
            if(!new_head){
                new_head = rev;
            }else{
                prev->next = rev;
            }
            prev = last;
        }else if(times!=0){
            if(rev){
                rev = reverse(rev);
            }
            prev->next = rev;
        }
    }
    return new_head;
}