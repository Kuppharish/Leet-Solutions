//We are visiting children of children till we get water and flipping all the visited elements to 0 so that they'll not be taken into account again.
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ild = 0;
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();++j){
                if(grid[i][j]=='1'){
                    ild++;
                    dfs(i,j,grid);
                }
            }
        }
        return ild;
    }
    void dfs(int i, int j, vector<vector<char>>& grid){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]=='0')
            return;
        grid[i][j]='0';
        dfs(i+1,j,grid);
        dfs(i,j+1,grid);
        dfs(i-1,j,grid);
        dfs(i,j-1,grid);
    }
};
