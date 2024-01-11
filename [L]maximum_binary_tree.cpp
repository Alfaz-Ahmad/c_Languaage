/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int max(int* nums, int numsSize){
    int pos = 0, i;
    for(i=0;i<numsSize;i++){
        if(nums[i] > nums[pos]){
            pos = i;
        }
    }
    return pos;
}

struct TreeNode* constructMaximumBinaryTree(int* nums, int numsSize) {
    if(numsSize <= 0){
        return NULL;
    }
    int pos = max(nums, numsSize);
    struct TreeNode* new = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    new->val = nums[pos];
    new->left = constructMaximumBinaryTree((nums),pos);
    new->right = constructMaximumBinaryTree((nums+pos+1),numsSize-pos-1);
    return new;
}