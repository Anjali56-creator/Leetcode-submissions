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
void ksum(TreeNode* root,int &sum,int &k){
    if(!root)
    return;
    ksum(root->left,sum,k);
    k--;
    if(k>=0)
    sum=root->val;
    if(k<=0)
    return;
    ksum(root->right,sum,k);
}
    int kthSmallest(TreeNode* root, int k) {
        int sum=0;
        ksum(root,sum,k);
        return sum;
    }
};