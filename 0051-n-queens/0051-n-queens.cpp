class Solution {
public:
    bool isSafe(int row , int col ,vector<string>& board ,  int n){
         //check upper column
         for(int i=row-1; i>=0; i--){
            if(board[i][col]=='Q'){
                return false;
            }
         }

         // check for upper left diagonal

         int i=row-1;
         int j=col-1;
         
         while( i>=0 &&  j>=0){
            if(board[i][j] == 'Q'){
                return false;
            }
            i--;
            j--;
         }

         //check for upper right diagonal

         i= row -1;
         j= col + 1;

         while(i >= 0 && j < n){

            if(board[i][j] == 'Q'){
                return false;
            }

            i--;
            j++;

         }

         return true;

    }
    
    void solve(int row , vector<vector<string>>& ans , vector<string>& board , int n){
        //base case 
        if(row == board.size()){
            ans.push_back(board);
            return;
        }

        //try every column
        for(int col=0; col<n; col++){

            if(isSafe(row,col, board , n)){

                board[row][col]='Q';

                solve(row + 1 ,  ans , board , n);

                //backtrack
                board[row][col]='.';


            }
            

        }


    }

    vector<vector<string>> solveNQueens(int n) {

     vector<vector<string>> ans;

     vector<string> board(n, string(n,'.')); // ["....","....","....","...."]

     solve(0 , ans , board , n);

     return ans;

        
    }
};