class Solution {
public:
    int FindMaxElement(vector<int>& arr ){

        int maximum=arr[0];

        for(int i=1; i < arr.size(); i++){
           maximum=max(maximum,arr[i]);
        }

        return maximum;
    }

    long long ComputeRequireHour(vector<int>& piles,int mid){

        long long totalHour=0;
        
        for(int i=0; i < piles.size();i++){

            totalHour += ceil((double)piles[i] / (double)mid);


        }

        return totalHour;

    }


    int minEatingSpeed(vector<int>& piles, int h) {

        //step 1 : Find the maximum of the array
        int maxi=FindMaxElement(piles);


        int low=1;
        int high=maxi;


        while(low<=high){

            int mid=low+(high-low)/2;

            long long total_hour=ComputeRequireHour(piles,mid);

            if(total_hour <= h){

                high=mid-1;

            }else {
                low=mid+1;
            }

        }

        return low;

       
   
    }
};