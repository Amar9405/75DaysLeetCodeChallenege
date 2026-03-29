class Solution {
public:

    vector<int> getRow(int n) {
         long long res=1;
         vector<int> ans;

         for(int i=0; i<=n; i++){
            ans.push_back(res);
            res=res* (n-i) /(i+1);
         }

         return ans;
    
    }
};