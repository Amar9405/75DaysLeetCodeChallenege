class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int n=nums.size();


        int low=0;
        int high=n-1;

        while(low <= high){
             int mid=low+(high-low)/2;

             if(nums[mid]==target) return true;

             //step 2:-Handle the Deblicate . when arry low=mid=high equals

             if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low=low+1;
                high=high-1;
                continue;
             }

             //step 3: Indentifyig which portion of array is sorted

             if(nums[low] <= nums[mid]){

                if(nums[low] <= target && target <= nums[mid]){

                      high=mid-1;

                }else{

                    low=mid+1;

                }
             }else{//nums[mid] <= nums[high]

               if(nums[mid]<= target && target <= nums[high]){
                    low=mid+1;
               }else{
                    high=mid-1;
               }
            
             }


        }

        return false;



        
    }
};