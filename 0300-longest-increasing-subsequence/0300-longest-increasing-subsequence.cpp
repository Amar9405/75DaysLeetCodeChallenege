class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

       vector<int> ans;
       int n=nums.size();

       ans.push_back(nums[0]);

       int longestlength=1;

       for(int i=1; i<n; i++){
        
         if(nums[i] > ans.back()){
            ans.push_back(nums[i]);
            longestlength++;

         }else{

          auto result = std::lower_bound(ans.begin(), ans.end(), nums[i]);
          int pos = result - ans.begin();
          ans[pos]=nums[i];
         }

       }

      

      return longestlength;


    }
};