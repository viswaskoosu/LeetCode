class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size=nums.size();int a=0,b=0;
        vector<int> ans;
        for(int i=0;i<size;++i){
            if(nums[i]==0) a++;
            else if(nums[i]==1) b++;
        }
        for(int i=0;i<a;++i){
            nums[i]=0;
        }
        for(int i=a;i<b+a;++i){
            nums[i]=1;
        }
        for(int i=b+a;i<size;++i){
            nums[i]=2;
        }
    }
};