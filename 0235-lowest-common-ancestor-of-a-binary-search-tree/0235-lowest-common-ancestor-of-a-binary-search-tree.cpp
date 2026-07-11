/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:

  TreeNode* BST(TreeNode* root,TreeNode* p,TreeNode*q){
    if(!root)
    return NULL;
    if(root->val>p->val && root->val>q->val)
    return BST(root->left,p,q);
    else if(root->val<p->val && root->val<q->val)
    return BST(root->right,p,q);
    else return root;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return BST(root,p,q);
    }
};