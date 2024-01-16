/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int sum(struct TreeNode* root, int low, int high){
    int l=0, r=0, at = 0;
    if(root->val >= low && root->val <= high){
        at = root->val;
    }
    if(root->left){
        l = sum(root->left, low, high);
    }
    if(root->right){
        r = sum(root->right, low, high);
    }
    return at+l+r;
}

int rangeSumBST(struct TreeNode* root, int low, int high) {
    return sum(root, low, high);
}