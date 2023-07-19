class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int col=image[0].size();int row=image.size();
        function(image,sr,sc,color,image[sr][sc]);
        return image;
    }
    void function(vector<vector<int>>& image,int sr,int sc, int color, int previouscolor){
        int col=image[0].size();int row=image.size();
        if(sr<0||sr>row-1||sc<0||sc>col-1||image[sr][sc]==color||image[sr][sc]!=previouscolor){
            return;
        }
        if(image[sr][sc]==previouscolor){
            int previouscolor1=image[sr][sc];
            image[sr][sc]=color;
            function(image,sr,sc+1,color,previouscolor1);
            function(image,sr,sc-1,color,previouscolor1);
            function(image,sr-1,sc,color,previouscolor1);
            function(image,sr+1,sc,color,previouscolor1);
        }
    }
};
