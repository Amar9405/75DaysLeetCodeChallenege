class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        //step 1 : sort the given array

        sort(nums.begin(), nums.end());
        int n=nums.size();

        int result_sum=nums[0]+nums[1]+nums[2];

        int min_difference= INT_MAX;

        for(int i=0; i<n; i++){

            int left=i+1;
            int right=n-1;

            while(left < right){

                int sum=nums[i]+nums[left]+nums[right];

                if(sum==target){
                    return target;
                }else if(sum < target){
                    left++;
                }else{
                    right--;
                }


                int calculate_different_to_target=abs(sum-target);

                if( calculate_different_to_target < min_difference){

                    result_sum=sum;
                    min_difference=calculate_different_to_target;

                }

            }
        }


        return result_sum;





        

    }
};