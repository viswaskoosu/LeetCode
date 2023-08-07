class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=1,j=nums.size()-2;
        if(j+1==0) return 0;
        if(j+2==2&&nums[1]>nums[0]) return 1;
        if(j+2==2&&nums[0]>nums[1]) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[nums.size()-1]>nums[nums.size()-2]) return nums.size()-1;
        while(i<=j&&j>=0&&i>=0){
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]) return i;
            if(nums[j]>nums[j-1]&&nums[j]>nums[j+1]) return j;
            i++;j--;
        }

        return -1;
    }
};