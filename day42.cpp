class Solution{
  public:
void dfs(int row,int col,vector<vector<int>>& image,vector<vector<int>>& ans,int iniColor,int newColor,int n,int m){
        if(row < 0 || col < 0 || row >=n || col >=m || image[row][col]!=iniColor || ans[row][col]==newColor){
            return;
        }
        ans[row][col] = newColor;
        // left
        dfs(row,col-1,image,ans,iniColor,newColor,n,m);
        // up
        dfs(row-1,col,image,ans,iniColor,newColor,n,m);
        // right
        dfs(row,col+1,image,ans,iniColor,newColor,n,m);
        // down
        dfs(row+1,col,image,ans,iniColor,newColor,n,m);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        vector<vector<int>> ans = image;
        int iniColor = image[sr][sc];
        int n = image.size();
        int m = image[0].size();
        dfs(sr,sc,image,ans,iniColor,newColor,n,m);
        return ans;
    }
};
