#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

void preOrder( struct node *root) {
  
	if( root == NULL ) 
      return;
	printf("%d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
  
}

/* you only have to complete the function given below.  
node is defined as  

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

*/

struct node* create(int data){
        struct node* new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = data;
        new_node->left = NULL;
        new_node->right = NULL;
        return new_node;
    }

struct node* insert( struct node* root, int data ) {
    if(!root){
        root = create(data);
    }else{
        if(root->data > data){
            if(!root->left){
                root->left = create(data);
                return root;
            }else{
                insert(root->left, data);
                return root;
            }
        }else{
            if(!root->right){
                root->right = create(data);
                return root;
            }else{
                insert(root->right, data);
                return root;
            }
        }
    }

    return root;	
}


int main() {
  
    struct node* root = NULL;
    
    int t;
    int data;

    scanf("%d", &t);

    while(t-- > 0) {
        scanf("%d", &data);
        root = insert(root, data);
    }
  
	preOrder(root);
    return 0;
}
