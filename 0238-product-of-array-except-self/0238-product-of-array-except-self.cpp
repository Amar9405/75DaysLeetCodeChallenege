class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // int n=nums.size();
        // vector<int> ans(n,1);
        
        // for(int i=z; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         if(i!=j){
        //             ans[i]*=nums[j];
        //         }
        //     }
        // }

        // return ans;
        
        int n=nums.size();
        vector<int> suffix(n,1);
        vector<int> preffix(n,1);
        vector<int> ans(n);

        for(int i=1; i<n; i++){
            suffix[i]=suffix[i-1]*nums[i-1];
        } 


        for(int i=n-2; i>=0; i--){
            preffix[i]=preffix[i+1]*nums[i+1];
        }   


        for(int i=0; i<n; i++){
            ans[i]=suffix[i]*preffix[i];
        }   


        return ans; 

        
    }
};