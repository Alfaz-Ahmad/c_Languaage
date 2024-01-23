/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(!head){
        return NULL;
    }else{
        struct ListNode* new_head = NULL,*temp = NULL, *slow = head, *fast = head->next;
        bool skip = false;
        while(fast){
            if(fast->val == slow->val){
                skip = true;
            }else{
                if(!skip){
                    if(!new_head){
                        new_head = slow;
                        temp = slow;
                    }else{
                        temp->next = slow;
                        temp = temp->next;
                    }
                }else{
                    skip = false;
                }
                slow = fast;
            }
            fast = fast->next;
        }
        if(!skip){
            if(!new_head){
                new_head = slow;
                temp = slow;
            }else{
                temp->next = slow;
                temp = temp->next;
            }
        }
        if(temp){
            temp->next = NULL;
        }
        return new_head;
    }
}