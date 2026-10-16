class Solution {
public:

   int fristOcuurance(vector<int>& nums, int target , int n){

    int first=-1;

    int low=0;
    int high=n-1;

    while(low <= high){

        int mid=low+(high-low)/2;

        if(nums[mid] == target){
             first=mid;
             high=mid-1;
        }else if(nums[mid] < target){
            low=mid+1;
        }else{
            high=mid-1;
        }
          
    }

    return first;

   }
   


   int secondOccurance(vector<int>& nums, int target , int n){

    int low=0;
    int high=n-1;

    int second=-1;

    while(low <= high){
           
           int mid=low+(high-low)/2;

           if(nums[mid] == target){
              second = mid;
              low = mid + 1;
           }else if(nums[mid] < target){
              low = mid + 1;
           }else{
              high = mid - 1;
           }
    }

    return second;
      
   }

    vector<int> searchRange(vector<int>& nums, int target) {

        int n=nums.size();

        int frist = fristOcuurance(nums , target, n);

        if(frist == -1) return {-1,-1};

        int second = secondOccurance(nums, target, n);

        return {frist,second};

        
    }
};