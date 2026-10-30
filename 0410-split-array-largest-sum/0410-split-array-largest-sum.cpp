class Solution {
public:

    int FindMaximum(vector<int>& nums){
        int maxi=INT_MIN;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > maxi){
                maxi=nums[i];
            }
        }
        return maxi;
    }

    int SumOfArray(vector<int>& nums){

        int sum=0;

        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }

        return sum;

    }

    int FindTotalSplit(vector<int>& nums , int mid){
        int n=nums.size();

        int split=1;

        int SumOfSplit=0;

        for(int i=0; i<n; i++){

            if(nums[i] + SumOfSplit <= mid){
                SumOfSplit+=nums[i];
            }else{
                split++;
                SumOfSplit=nums[i];  
            }
              
        }

        return split;


    }



    int splitArray(vector<int>& nums, int k) {

        int n=nums.size();

        int low=FindMaximum(nums);
        int high=SumOfArray(nums);

        while(low <= high){

            int mid= low+(high-low)/2;

            int NoOfSplit = FindTotalSplit(nums,mid);



            if(NoOfSplit <= k){

                high=mid-1;
                
            }else{
                low=mid+1;
            }

        }
        return low;
        
    }
};