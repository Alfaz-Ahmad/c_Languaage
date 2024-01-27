/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* find_mid(struct ListNode* curr){
    if(!curr || !curr->next){
        return curr;
    }else{
        struct ListNode* fast=curr->next->next, *slow = curr, *mid;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        mid = slow->next;
        slow->next = NULL;
        return mid;
    }
}

struct ListNode* merge_sort(struct ListNode* left, struct ListNode* right){
    struct ListNode* res = NULL, *temp = NULL;
    while(left && right){
        if(left->val > right->val){
            if(!res){
                res = right;
                temp = right;
            }else{
                temp->next = right;
                temp = temp->next;
            }
            right = right->next;
        }else{
            if(!res){
                res = left;
                temp = left;
            }else{
                temp->next = left;
                temp = temp->next;
            }
            left = left->next;
        }
    }
    if(!left){
        temp->next = right;
        return res;
    }
    temp->next = left;
    return res;
}

struct ListNode* merge(struct ListNode* curr){
    if(!curr || !curr->next){
        return curr;
    }else{
        struct ListNode* mid = find_mid(curr), *left, *right, *res;
        left = merge(curr);
        right = merge(mid);
        if(!left){
            return right;
        }
        if(!right){
            return left;
        }
        return merge_sort(left, right);
    }
}

struct ListNode* sortList(struct ListNode* head) {
    return merge(head);
}