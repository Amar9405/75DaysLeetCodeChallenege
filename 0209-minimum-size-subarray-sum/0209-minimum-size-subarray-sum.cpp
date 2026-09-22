class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n=nums.size();

        int left=0;
        int right=0;

        int sum=0;
        int minlength=INT_MAX;

        while(right < n){

            sum+=nums[right];

            while(sum >= target){

                minlength=min(minlength, right-left+1);

                sum-=nums[left];

                left++;

            }


            right++;


        }

       if(minlength==INT_MAX){
           return 0;
       }else{
          return minlength;
       }


   
    }
};