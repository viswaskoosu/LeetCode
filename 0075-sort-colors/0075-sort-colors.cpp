class Solution {
public:
    void sortColors(vector<int>& nums) {
        int right=nums.size()-1;int a=0,b=0;
        int left=0;int it=0;
        while(it<=right){
            if(nums[it]==0) {
                swap(nums[it],nums[left]);
                left++;
                it++;
            }
            else if(nums[it]==2){
                swap(nums[it],nums[right]);
                right--;
            }
            else it++;
        }

    }
};