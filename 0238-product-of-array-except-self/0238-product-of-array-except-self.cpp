class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size());
        vector<int> suf(nums.size());
        pre[0]=1;
        suf[nums.size()-1]=1;
        for(int i=1;i<nums.size()-1;++i){
            pre[i]=pre[i-1]*nums[i-1];
            suf[nums.size()-i-1]=suf[nums.size()-i]*nums[nums.size()-i];
        }
        pre[nums.size()-1]=pre[nums.size()-2]*nums[nums.size()-2];
        suf[0]=suf[1]*nums[1];
        vector<int> ans;
        for(int i=0;i<nums.size();++i){
            ans.push_back(pre[i]*suf[i]);
        }
        return ans;
    }
};