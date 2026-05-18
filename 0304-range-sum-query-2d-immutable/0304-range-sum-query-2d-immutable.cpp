class NumMatrix {
public:
     
    vector<vector<int>> prefixsum;
    
    NumMatrix(vector<vector<int>>& mat) {

        int n=mat.size();
        int m=mat[0].size();

        prefixsum.resize(n ,vector<int>(m));

        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){

                  int left=0;
                  int top=0;
                  int diagonal=0; 

                  if(j > 0){
                     left=prefixsum[i][j-1];
                  }

                  if(i > 0){
                    top=prefixsum[i-1][j];
                  }

                  if(i > 0 && j > 0){
                     diagonal=prefixsum[i-1][j-1];
                  }
                  prefixsum[i][j]=mat[i][j]+left+top-diagonal;

            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {

        int total=prefixsum[row2][col2];

        int top=0;
        int left=0;

        int diagnol=0;

        if(row1 > 0){
            top=prefixsum[row1-1][col2];
        }

        if(col1 > 0){
            left=prefixsum[row2][col1-1];
        }

        if(row1 > 0 && col1 > 0){
            diagnol=prefixsum[row1-1][col1-1];
        }


        return total-left-top +diagnol;


        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */