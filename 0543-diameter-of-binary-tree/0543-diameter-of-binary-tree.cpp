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
    int max1=0;
    int diameterOfBinaryTree(TreeNode* root) {
        func(root);
        return max1;
    }
    int func(TreeNode* root){
        if(!root) return 0;
        int lh=func(root->left);
        int rh=func(root->right);
        max1=max(max1,lh+rh);
        return 1+max(lh,rh);
    }
};