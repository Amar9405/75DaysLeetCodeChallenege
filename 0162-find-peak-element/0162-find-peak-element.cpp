class Solution {
public:
    int findPeakElement(vector<int>& nums) {

    //    int n=nums.size();

    //    for(int i=0; i<n; i++){
    //        if((i==0 || nums[i-1] < nums[i]) && ( i == n-1 || nums[i] > nums[i+1])){
    //            return i;
    //        }
    //    }

    //    return -1;

    //Most optimal solution using Binary search

    //edge case (check  if  the frist and last element is peak element)

    int n=nums.size();

    if(n==1) return 0;

    if(nums[0] > nums[1]) return 0;//check frist element of the array if it,s peak then return index..// no need to perform binary search 
    if(nums[n-1] > nums[n-2]) return n-1; // check last element of the array is it peak element then  return index.. // no need to perform binary search

    int low=1;
    int high=n-2;


    while(low <= high){
        int mid= low+(high-low)/2;

        if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
            return mid;
        }else if(nums[mid] > nums[mid-1]){
            low=mid+1;
        }else{//nums[mid] > nums[mid+1];
            high=mid-1;
        }
    }

    return -1;


    

    }
};