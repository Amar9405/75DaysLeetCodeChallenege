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

    int Calculate(vector<int>& nums , int divisor){

        int sum=0;

        for(int i=0; i<nums.size(); i++){
            sum += ceil((double)nums[i]/divisor);
        }

        return sum;


    }


    int smallestDivisor(vector<int>& nums, int threshold) {

        int low=1;
        int high=FindMaximum(nums);

        int ans=0;


        while(low <= high){

            int mid=low+(high-low)/2;

            int Divisionresult=Calculate(nums,mid);

            if(Divisionresult <= threshold){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;    
            }
        }
        return  ans;
        
    }
};