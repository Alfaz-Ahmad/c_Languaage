/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

struct Node* copyRandomList(struct Node* head) {
	if(!head){
        return NULL;
    }else{
        struct Node* new_head=NULL, *org_temp = head, *new_temp=NULL;
        while(org_temp){
            struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
            new_node->val = org_temp->val;
            new_node->next = NULL;
            if(new_head == NULL){
                new_head = new_node;
                new_temp = new_node;
            }else{
                new_temp->next = new_node;
                new_temp = new_temp->next;
            }
            org_temp = org_temp->next;
        }
        struct Node* temp_org=head, *temp_new = new_head, *sec_new_temp, *sec_org_temp;
        while(temp_new){
            if(temp_org->random == NULL){
                temp_new->random = NULL;
            }else{
                sec_new_temp = new_head;
                sec_org_temp = head;
                while(temp_org->random != sec_org_temp){
                    sec_org_temp = sec_org_temp->next;
                    sec_new_temp = sec_new_temp->next;
                }
                temp_new->random = sec_new_temp;
            }
            temp_new = temp_new->next;
            temp_org = temp_org->next;
        }
        return new_head;
    }
    assert(false);
}