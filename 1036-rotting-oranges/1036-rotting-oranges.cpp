class Solution {
public:
    int freshOranges = 0;
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<pair<int, int>,int>> q;
        int fresh=0;
        vector<vector<int>> v(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 2 && v[i][j] != 1) {
                    v[i][j] = 1;
                    q.push({{i, j},0});
                }
                else{
                    v[i][j]=0;
                }
                if (grid[i][j] == 1) {
                    fresh++;
                }
            }
        }
        int tm=0;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        int cnt=0;
        while (!q.empty()) {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            q.pop();
            tm=max(t,tm);
            for(int i=0;i<4;++i){
                int nrow=r+drow[i];
                int ncol=c+dcol[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && v[nrow][ncol]!=2 && grid[nrow][ncol]==1){
                    q.push({{nrow,ncol},t+1});
                    v[nrow][ncol]=2;
                    cnt++;
                }
            }
        }
        return fresh==cnt? tm : -1;
    }
};
