class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int n=arr.size();

        if (n==3) return 1;

        int low=0; 
        int high=n-1;
        int ans=-1;

        while(low <= high){
            int mid=low+(high-low)/2;

            if(arr[mid] >= arr[mid+1]){

                ans=mid;
                high=mid-1;


            }else{
                low=mid+1;
            }
        }

        return ans;

         

       
        
    }
};