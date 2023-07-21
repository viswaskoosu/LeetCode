class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count,value=0;
        for(int i:nums){
            if(count==0) value=i;
            if(value==i) count++;
            else count--;
        }
        return value;
    }
};