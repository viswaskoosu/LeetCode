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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       if(p==root||q==root||root==NULL) return root;
       TreeNode* left=lowestCommonAncestor(root->left,p,q);
       TreeNode* right=lowestCommonAncestor(root->right,p,q);
       if(left&&right) return root;
       else if(left&&!right) return left;
       else return right;
    }
};