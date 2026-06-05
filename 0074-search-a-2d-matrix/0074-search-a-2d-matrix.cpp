class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        
        int startrow = 0, endrow = m - 1;
        
        // Binary search on rows
        while (startrow <= endrow) {
            int midrow = startrow + (endrow - startrow) / 2;
            
            // Check the first and last elements of the mid row
            if (matrix[midrow][0] <= target && matrix[midrow][n-1] >= target) {  // Now, we know the target could be in this row, do binary search on the row
                int startcol = 0, endcol = n - 1;
                
                while (startcol <= endcol) {
                    int midcol = startcol + (endcol - startcol) / 2;
                    
                    if (matrix[midrow][midcol] == target) {
                        return true;
                    }
                    else if (matrix[midrow][midcol] < target) {
                        startcol = midcol + 1;
                    }
                    else {
                        endcol = midcol - 1;
                    }
                }
                return false;  // If we exit this loop, the target is not found in the row
            }
            else if (matrix[midrow][n-1] < target) {
                startrow = midrow + 1;
            }
            else {
                endrow = midrow - 1;
            }
        }
        
        return false;  // If no row contains the target, return false
    }
};