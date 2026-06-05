class Solution {
public:
    
    bool binarySearch(vector<int> mat , int tar){
         int n= mat.size();
         int low =0;
         int high=n-1;

         while(low <= high){
            int mid=(low+high)/2;

            if(mat[mid]==tar){
                return true;
            }else if(tar > mat[mid]){
                  low=mid+1;
            }else{//traget < mat[mid]
                high=mid-1;

            }
         }
         return false;

    }
 
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        //Better approach using binary search.

        int n=mat.size();
        int m=mat[0].size();

        for(int i=0; i<n; i++){

            if(mat[i][0] <= target && target <= mat[i][m-1]){
                return binarySearch(mat[i],target);
            }
        }
        return false;
    }
};