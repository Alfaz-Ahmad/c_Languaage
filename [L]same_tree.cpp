/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(!p && !q){
        return true;
    }else{
        if((!p && q) || (p && !q)){
            return false;
        }else{
            if(p->val != q->val){
                return false;
            }else if(!isSameTree(p->left, q->left)){
                return false;
            }else if(!isSameTree(p->right, q->right)){
                return false;
            }
            return true;
        }
    }
}