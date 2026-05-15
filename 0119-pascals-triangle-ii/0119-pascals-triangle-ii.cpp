class Solution {
public:

    vector<int> getRow(int n) {
         
         //store the each colus in this ans vector
         vector<int> ans ;


         long long res=1;

         for(int i=0; i<=n;  i++){
             ans.push_back(res);
             res=res*(n-i) /(i+1); 
         }

         return ans;


    
    }
};