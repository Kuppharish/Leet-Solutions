class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<vector<int>> dir={{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        int res = -1,ct =0;
        queue<vector<int>> q;
        for(int i=0;i<grid.size();i++){
            for(int j =0;j<grid[0].size();j++){
                if(grid[i][j]==2) q.push({i,j});
                if(grid[i][j]>0) ct++;
            }
        }
        while(!q.empty()){
            res++;
            int size = q.size();
            for(int i = 0;i<size;++i){
                vector<int> cur = q.front();
                q.pop();
                ct--;
                for(int k=0;k<4;++k){
                    int x = cur[0]+dir[k][0];
                    int y = cur[1]+dir[k][1];
                    if(x>=grid.size()||y>=grid[0].size()||x<0||y<0||grid[x][y]!=1) continue;
                    grid[x][y]=2;
                    q.push({x,y});
                }
            }
        }
        if(ct ==0) return max(0,res);
        return -1;
    }
};
