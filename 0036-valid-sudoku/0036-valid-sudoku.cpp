class Solution {
public:
    bool FilaValida(vector<vector<char>>& board, int i){
        vector<bool> nums(9,false);
        for(int j=0; j<9; j++){
            if(board[i][j]!='.'){
                if(!nums[board[i][j]-'0'-1]){
                    nums[board[i][j]-'0'-1]=true;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
    bool ColumValida(vector<vector<char>>& board, int i){
        vector<bool> nums(9,false);
        for(int j=0; j<9; j++){
            if(board[j][i]!='.'){
                if(!nums[board[j][i]-'0'-1]){
                    nums[board[j][i]-'0'-1]=true;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
    bool CuadroValido(vector<vector<char>>& board, int i, int j){
        vector<bool> nums(9,false);
        for(int k=i; k<i+3; k++){
            for(int l=j; l<j+3; l++){
               if(board[k][l]!='.'){
                    if(!nums[board[k][l]-'0'-1]){
                        nums[board[k][l]-'0'-1]=true;
                    }else{
                        return false;
                    }
                } 
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){
            if(!FilaValida(board, i)) return false;
            if(!ColumValida(board, i)) return false;
        }
        for(int i=0; i<3; i++){    
            for(int j=0; j<3; j++){
                if(!CuadroValido(board, i*3, j*3)) return false;
            }
        }
        return true;
    }
};