class Solution {
public:
   long long ncr(int n , int c){
         int res=1;
         for(int i=0; i<c; i++){
            res=res * ( n-i);
            res=res  / (i+1);
         }
         return res;
   }
   
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;

        for(int row=1; row<=n; row++){
            vector<int> temp;
            for(int col=1; col<=row;  col++){
               temp.push_back(ncr(row-1,col-1));
            }
            ans.push_back(temp);
        }
        return ans;
    }
};