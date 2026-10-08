class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int left=0;
        int right=0;


        int n=nums.size();


        int minLength=INT_MAX;
        int sum=0;


        while( right < n){

            sum+=nums[right];


            while( sum >= target){


                minLength=min(minLength, right - left +1);
                

                sum-=nums[left];

                left++;

                
            }

            right++;


        }


         
        if(minLength==INT_MAX){
            return 0;
        }else{
            return minLength;
        }

    }
};