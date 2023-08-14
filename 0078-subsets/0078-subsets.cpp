class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> out;
        func(ans,0,out,nums);
        return ans;        
    }
    void func(vector<vector<int>> &v,int i,vector<int> out,vector<int> v1){
        if(i>=v1.size()){
            v.push_back(out);
            return;
        }
        func(v,i+1,out,v1);
        out.push_back(v1[i]);
        func(v,i+1,out,v1);
        
    }
};