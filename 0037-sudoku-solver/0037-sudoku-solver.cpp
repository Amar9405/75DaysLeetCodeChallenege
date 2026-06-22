class Solution {
public:
    
    bool isSafe(int row , int col , char num , vector<vector<char>>& board ){

        //check for row

        for(int i = 0; i < 9; i++){
            if(board[row][i]==num){
                return false;
            }

        }

        //check for col
        for(int j=0; j < 9 ; j++){
            if(board[j][col]==num){
                return false;
            }
        }

        //check for 3*3 grid

        int StartRow=(row/3) * 3;
        int StartCol=(col/3) * 3;

        for(int i=StartRow ; i < StartRow+3 ; i++){

            for(int j=StartCol; j < StartCol+3 ; j++){
                if(board[i][j]==num){
                    return false;
                }
            }

        }

        return true;

    }



    bool solve(vector<vector<char>>& board){
         
         //Find the empty cell

         for(int row=0; row < 9; row++){

            for(int col=0; col < 9; col++){

                 if(board[row][col] == '.'){

                    //Try the number form 1 to 9;

                    for(char num='1' ; num <= '9' ; num++){

                        if(isSafe(row , col , num , board)){

                            board[row][col]=num;

                            if(solve(board)){
                                return true;
                            }
     
                            //Backtracking 
                            board[row][col]='.';

                        }


                    }
                    //No digit work
                    return false;

                 }

 
            }
         }
         
         //Complete the all sudoku
         return true;

    }

    void solveSudoku(vector<vector<char>>& board) {

        solve(board);
        
    }
};