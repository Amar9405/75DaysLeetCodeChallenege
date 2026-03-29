class Solution {
public:
   long long ncr(int n, int r){
    long long res=1;
    for(int i=0; i<r; i++){
         res=res*(n-i);
         res=res /(i+1);
    }
    return res;    
   }

    vector<int> getRow(int n) {
        vector<int> ans;
        for(int c=0;  c <= n;  c++){
            ans.push_back(ncr(n, c));
        }

        return ans;
    
    }
};