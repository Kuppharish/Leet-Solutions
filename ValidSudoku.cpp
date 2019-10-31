class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i<9; i++){
            unordered_set <char> cset;
            vector<char> V = board[i];
            for(int j = 0; j<9;j++){
                //cout<<i<<" "<<j;
                if(V[j]!='.'){
                    if(cset.find(V[j])==cset.end())
                        cset.insert(V[j]);
                    else
                        return false;
                }
            }
        }
        for(int i = 0; i<9; i++){
            unordered_set <char> cset;
            for(int j = 0; j<9;j++){
                if(board[j][i]!='.'){
                    if(cset.find(board[j][i])==cset.end())
                        cset.insert(board[j][i]);
                    else
                        return false;
                }
            }
        }
        for(int i = 0; i<9; i+=3){
            for(int j = 0; j<9;j+=3){
                unordered_set <char> cset;
                for(int k = i; k<i+3; k++){
                    for(int l = j; l<j+3; l++){
                        if(board[k][l]!='.'){
                            if(cset.find(board[k][l])==cset.end())
                                cset.insert(board[k][l]);
                            else
                                return false;
                        } 
                    }
                }
            }
        }
        return 1;
    }
};
