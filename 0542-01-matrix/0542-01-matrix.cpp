class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>> q;
        vector<vector<int>> v(mat.size(),vector<int>(mat[0].size(),-1));
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    v[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            if(neigh(i-1,j,mat.size(),mat[0].size()) && v[i-1][j]==-1){
                q.push({i-1,j});
                v[i-1][j]=v[i][j]+1;
            }
            if(neigh(i+1,j,mat.size(),mat[0].size()) && v[i+1][j]==-1){
                q.push({i+1,j});
                v[i+1][j]=v[i][j]+1;
            }
            if(neigh(i,j-1,mat.size(),mat[0].size()) && v[i][j-1]==-1){
                q.push({i,j-1});
                v[i][j-1]=v[i][j]+1;
            }
            if(neigh(i,j+1,mat.size(),mat[0].size()) && v[i][j+1]==-1){
                q.push({i,j+1});
                v[i][j+1]=v[i][j]+1;
            }
            q.pop();
        }
        return v;
    }
    bool neigh(int i,int j,int m,int n){
        if(i>=0&& i<m&&j>=0&&j<n){
            return 1;
        }
        return 0;
    }
};