/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if(!head || !head->next){
        return head;
    }else{
        struct ListNode* even_head = head->next, *temp_even = head->next, *temp_odd = head;
        while(temp_odd->next && temp_even->next){
            temp_odd->next = temp_even->next;
            temp_odd = temp_odd->next;
            temp_even->next = temp_odd->next;
            temp_even = temp_even->next;
        }
        temp_odd->next = even_head;
        return head;
    }
}