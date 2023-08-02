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
    vector<int> a;
    void inorder(TreeNode* root){
        if(root==NULL)  return;
        inorder(root->left);
        a.push_back(root->val);
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        if(!root) return 1;
        inorder(root);
        vector<int> v1;
        v1=a;
        sort(a.begin(),a.end());
        if(a==v1){
            for(int i=1;i<a.size();i++){
                if(a[i-1]==a[i])return 0;
            }
            return 1;
        }
        return 0;
    }
};