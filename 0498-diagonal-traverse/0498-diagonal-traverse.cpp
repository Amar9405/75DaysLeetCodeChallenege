class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {

        if(mat.empty() || mat[0].empty()) return {};

        int n=mat.size();
        int m=mat[0].size();
        
        vector<int> ans(n*m);
        int row=0;
        int col=0;

        for(int i=0;  i< n*m ;i++){

            ans[i]=mat[row][col];
              //upword 
            if((row+col)%2==0){
               if(col == m-1) row++;
               else if(row == 0) col++;
               else {row--; col++;};
            }else{//downword
              if(row == n-1) col++;
              else if(col == 0) row++;
              else {row++; col--; };              
            }                    
        }
        return ans;
    }
};