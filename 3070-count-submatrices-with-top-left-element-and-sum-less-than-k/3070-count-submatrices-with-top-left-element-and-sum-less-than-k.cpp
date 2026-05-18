class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {

        int ans=0;

        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>> prefixsum(n ,vector<int>(m));

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

                prefixsum[i][j]=grid[i][j]+left+top-diagonal;

                if(prefixsum[i][j] <= k) ans++;
                
            }
        }

        return ans;
        
    }
};