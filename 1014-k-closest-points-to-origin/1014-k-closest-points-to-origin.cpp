class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> v(k);
        priority_queue<vector<int>> maxheap;
        for(int i=0;i<points.size();++i){
            maxheap.push({points[i][0]*points[i][0]+points[i][1]*points[i][1],points[i][0],points[i][1]});
            if(maxheap.size()>k){
                maxheap.pop();
            }
        }
        for(int i=0;i<k;++i){
            vector<int> top=maxheap.top();
            maxheap.pop();
            v[i]={top[1],top[2]};
        }
        return v;
    }
};