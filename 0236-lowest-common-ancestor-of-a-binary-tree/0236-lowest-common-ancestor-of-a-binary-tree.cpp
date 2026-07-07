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
TreeNode* LCA(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root || root == p || root == q)
            return root;

        TreeNode* left = LCA(root->left, p, q);
        TreeNode* right = LCA(root->right, p, q);

        if (left && right)
            return root;

        if (left)
            return left;

        return right;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return LCA(root,p,q);
    }
};