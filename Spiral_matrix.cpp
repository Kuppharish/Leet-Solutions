class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int st_x =0, st_y =0;
        int en_x =n-1, en_y =n-1;
        int fill=1;
        vector<vector<int> > M( n , vector<int> (n, 0));
        while(st_x<=en_x&&st_y<=en_y){
            for(int i=st_y;i<=en_y;i++){
                M[st_x][i] = fill;
                fill++;
            }
            st_x++;
            for(int i = st_x; i<=en_x;i++){
                M[i][en_y] = fill;
                fill++;
            }
            en_y--;
            for(int i = en_y; i>=st_y;i--){
                M[en_x][i] = fill;
                fill++;
            } 
            en_x--;
            for(int i = en_x; i>=st_x;i--){
                M[i][st_y] = fill;
                fill++;
            }
            st_y++;
        }
        return M;
    }
};
