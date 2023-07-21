class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int j=0;int sum=nums[0];int max=nums[0];
        for(int i:nums){
            if(j==0){
                j++;
                continue;
            }
            sum+=i;
            if(sum<i) sum=i;
            if(sum>max) max=sum;
        }
        return max;
    }
};