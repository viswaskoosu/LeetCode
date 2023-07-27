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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* prev=root;
        if(root!=NULL) ans.push_back({root->val});
        else return ans;
        int level=0;
        while(!q.empty()){
            level=q.size();
            vector<int> a;
            for(int i=0;i<level;++i){
                root=q.front();
                if(root->left!=NULL){ 
                    q.push(root->left);
                    a.push_back(root->left->val);
                }
                if(root->right!=NULL){
                    q.push(root->right);
                    a.push_back(root->right->val);
                }
                q.pop();
            }
            if(!a.empty()) ans.push_back(a);
        }
        return ans;
    }
};