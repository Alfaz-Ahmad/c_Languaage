/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool check(struct TreeNode* address, int val){
    if(!address){
        return true;
    }else if(address->val != val){
        return false;
    }else{
        if(!check(address->left, val)){
            return false;
        }else if(!check(address->right, val)){
            return false;
        }
    }
    return true;
}


bool isUnivalTree(struct TreeNode* root) {
    int val = root->val;
    return check(root, val);
}