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
    bool ans;
    int balance(TreeNode* root){
        if(!root) return 0;
        if(!ans) return 0;
        int left=balance(root->left);
        int right= balance(root->right);
        if(abs(left-right)>1) ans=0;
        return 1+max(left,right);
    }

    bool isBalanced(TreeNode* root) {
        ans = 1;
        balance(root);
        return ans;
    }
};