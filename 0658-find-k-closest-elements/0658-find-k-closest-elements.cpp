class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums , int k, int x) {

     int n=nums.size();
  
     int low=0;
     int high=n-k;
     vector<int> ans;

     while(low < high){

          int mid=low+(high-low)/2;

          if( x - nums[mid] > nums[mid+k] - x){

              low=mid+1;

          }else{
            high=mid;
          }

       }
       

       for(int i=low ; i<low+k; i++){

         ans.push_back(nums[i]);
          
       }


       return ans;


    }
};