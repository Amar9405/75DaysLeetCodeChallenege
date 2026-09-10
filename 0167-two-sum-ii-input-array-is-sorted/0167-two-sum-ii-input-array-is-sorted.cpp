class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

       int n=nums.size();

       vector<int> ans;

       int left=0;
       int right=n-1;

       while(left < right){

          int sum = nums[left]  + nums[right];

          if(sum == target){
            ans.push_back(left+1);
            ans.push_back(right+1);
            left++;
            right--;
          }else if(sum < target){
             left++;
          }else{
            right--;
          }
          
       }


       return ans;



    }
};