class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
            if(m[nums[i]]>nums.size()/2) return nums[i];
        }
        int maxtimes=0;int maxelement;
        for( map<int,int>::iterator i=m.begin(); i!=m.end(); ++i){
            if(i->second>maxtimes) maxelement=i->first;
        }
        return maxelement;
    }
};