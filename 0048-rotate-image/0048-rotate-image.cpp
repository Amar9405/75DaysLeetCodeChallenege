class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int size=matrix.size();

        //step 1:-transpose the given matrix .row become col and col become row.\
        //in transpose mat diagnoal is same as original matrix .

        for(int i=0; i<size; i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //step 2:- reverse the each row of the given transpose mat.

        for(int i=0; i<size; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        } 
        
    }
};