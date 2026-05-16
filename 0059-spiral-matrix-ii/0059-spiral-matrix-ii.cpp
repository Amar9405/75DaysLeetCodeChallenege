class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> ans(n, vector<int>(n));

        int n2=ans.size();
        int m=ans[0].size();

        //declare the Boundary of 2D matrix;
        int left=0, right=m-1; 
        int top=0, bottom=n2-1;

        int insert=1;

    while(left <= right && top <=bottom){
        //left to right
        for(int i=left ; i<=right; i++){
            ans[top][i]=insert;
            insert++;
        }

        top++;

        //top to bottom

        for(int i=top; i<=bottom; i++){
            ans[i][right]=insert;
            insert++;
        }
        right--;
        

        //right to left(reverse)
        if(top <= bottom){
        for(int i=right ; i>=left;  i--){
            ans[bottom][i]=insert;
            insert++;
        }
        }
    
       bottom--;

       //bottom to top(reverse)
       
       if(left <= right){
       for(int i=bottom; i>=top; i--){
            ans[i][left]=insert;
            insert++;
       }
      }
       left++; 
        
    }

    return ans;
        

        
        
    }
};