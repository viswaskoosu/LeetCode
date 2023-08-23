class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> sans;
        findCombinationSum(0,target,candidates,ans,sans);
        return ans;
    }
    void findCombinationSum(int i,int target,vector<int> &candidates,vector<vector<int>> &ans,vector<int> &sans){
        if(i==candidates.size()){
            if(!target){
            ans.push_back(sans);
            }
            return;
        }
        // if(!target){
        //     ans.push_back(sans);
        //     return;
        // }
        if(candidates[i]<=target){
            sans.push_back(candidates[i]);
            findCombinationSum(i,target-candidates[i],candidates,ans,sans);
            sans.pop_back();
        }
        findCombinationSum(i+1,target,candidates,ans,sans);
    }
};
    