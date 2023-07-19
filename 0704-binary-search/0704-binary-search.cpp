class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;int right=nums.size()-1;
        while(left<=right){
            if(nums[left+(right-left)/2]==target){
                    return left+(right-left)/2;
            }
            else if(nums[left+(right-left)/2]<target){
                left=left+(right-left)/2 +1;
            }
            else{
                right=left+(right-left)/2 -1;
            }
        }
        return -1;
    }
};