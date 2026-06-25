class Solution {
public:
   int UpperBond(vector<int>& nums, int target ,int n){
       
       int low=0;
       int high=n-1;
       int ans=n;

       while(low <= high){

           int mid=low+(high-low)/2;

           if(nums[mid] > target){
               ans=mid;
               high=mid-1;
           }else{
              low=mid+1;
           }
            
       }

       return ans;

   }

   int LowerBond(vector<int>& nums, int target ,int n){
         int low=0;
         int high=n-1;
         int ans=n;

         while(low <= high){
            int mid= low +(high - low) / 2;

            if(nums[mid]>=target){
                  ans=mid;
                  high=mid-1;
            }else{
                low=mid+1;
            }
         }

         return ans;

   }


    vector<int> searchRange(vector<int>& nums, int target) {

        // int startposition=-1;
        // int endposition=-1;

        // int n=nums.size();

        // for(int i=0; i<n; i++){

        //     if(nums[i]==target){
        //         startposition=i;
        //         break;
        //     }
             
        // }

        // for(int i=n-1; i>=0; i--){
        //     if(nums[i]==target){
        //         endposition=i;
        //         break;
        //     }
        // }


        // return {startposition,endposition};

        //Binary seacrch solution

        int n=nums.size();

        int  firtsoccurance=LowerBond(nums,target,n);

        if(firtsoccurance == n || nums[firtsoccurance] != target ) return {-1,-1};

        int secondoccurance=UpperBond(nums,target ,n)-1;


        return { firtsoccurance , secondoccurance};









        

        
    }
};