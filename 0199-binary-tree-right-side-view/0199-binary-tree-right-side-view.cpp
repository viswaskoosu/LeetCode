class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> v;
        func(root, v, 0);
        vector<int> v1;
        for (int i = 0; i < v.size(); ++i) {
            if (!v[i].empty()) {
                v1.push_back(v[i].back());
            }
        }
        return v1;
    }

    void func(TreeNode* root, vector<vector<int>>& v, int i) {
        if (!root) return;

        if (i >= v.size()) {
            v.push_back(vector<int>());
        }
        
        v[i].push_back(root->val);
        func(root->left, v, i + 1);
        func(root->right, v, i + 1);
    }
};
