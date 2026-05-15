class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        

        vector<int> ans;

        if(mat.size()==0) return ans;

        int n=mat.size();
        int m=mat[0].size();

        int left=0 , right=m-1;
        int top=0 ,  bottom=n-1;

        
    while(left <= right && top <= bottom){
        //left to  right
        for(int i=left; i<= right; i++){
            ans.push_back(mat[top][i]);
        }

        top++;

        //top to bottom

        for(int i=top ; i<=bottom; i++ ){
             ans.push_back(mat[i][right]);
        }

        right--;

        //right to left(reverse)


       if(top <= bottom){
        for(int i=right ; i>=left; i--){
             ans.push_back(mat[bottom][i]);
        }
        bottom--;
     }

        //bottom to top(reverse)

      if(left <= right){
        for(int i=bottom; i>=top;  i--){
             ans.push_back(mat[i][left]);
        }
        left++;
      }

    }


    return ans;




        
    }
};