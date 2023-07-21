class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;int max=nums[0];
        for(int i:nums){
            sum+=i;
            if(sum<i) sum=i;
            if(sum>max) max=sum;
        }
        return max;
    }
};