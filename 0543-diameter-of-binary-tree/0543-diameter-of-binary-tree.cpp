/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int diameterbt(TreeNode*root,int &diameter){
       if(root==NULL)
        return 0;
        int leftHeight=diameterbt(root->left,diameter);
        int rightHeight=diameterbt(root->right,diameter);
        diameter=max(diameter,leftHeight+rightHeight);
        return 1+max(leftHeight,rightHeight);
}
    int diameterOfBinaryTree(TreeNode* root) {
      
     int diameter = 0;
     diameterbt(root, diameter);
    return diameter;
    }
};