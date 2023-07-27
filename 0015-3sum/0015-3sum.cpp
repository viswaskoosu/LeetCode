class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)  {
        vector<vector<int>> nums1;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        for(int l=0;l<nums.size()-1;++l){
            if (l > 0 && nums[l] == nums[l - 1])
                continue;
            i=l+1;j=nums.size()-1;
            while(i<j){
                if(nums[i]+nums[j]+nums[l]==0){
                    vector<int> a;
                    a.push_back(nums[l]);
                    a.push_back(nums[i]);
                    a.push_back(nums[j]);
                    nums1.push_back(a);
                    while (i < j && nums[i] == nums[i + 1])
                        i++;
                    while (i < j && nums[j] == nums[j - 1])
                        j--;

                    i++;
                    j--;
                }
                else if(nums[i]+nums[j]+nums[l]<0){ 
                    i++;
                }
                else if(nums[i]+nums[j]+nums[l]>0){
                    j--;
                }
            }
        }
        return nums1;
    }
};