class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=INT_MIN;int till=1;
        for(int i=0;i<nums.size();i++){
            till*=nums[i];
            max1=max(till,max1);
            if(nums[i]==0) till=1;
        }
        till=1;
        for(int i=nums.size()-1;i>=0;i--){
            till*=nums[i];
            max1=max(till,max1);
            if(nums[i]==0) till=1;
        }
        return max1;
    }
};