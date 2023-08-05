class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(target==nums[left]) return left;
            if(target==nums[right]) return right;
            if(nums[mid]>nums[left]){
                left=mid;
            }
            else{
                if(left==0&&right==nums.size()-1){
                    for(int i=0;i<=right;++i){
                        if(nums[i]==target){
                            return i;
                        }
                    }
                    return -1;
                }
                while(nums[0]<nums[left]){
                    left++;
                }
                break;
            }
        }
        if(nums[0]<target){
            for(int i=0;i<=left;++i){
                if(nums[i]==target){
                    return i;
                }
            }
        }
        else{
            for(int i=left;i<nums.size();++i){
                if(nums[i]==target) return i;
            }
        }
        return -1;
    }
};