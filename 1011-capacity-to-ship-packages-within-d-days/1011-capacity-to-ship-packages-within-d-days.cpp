class Solution {
public:

    int FindMaximumElement(vector<int>& weights){
        int maxi=INT_MIN;

        for(int i=0; i<weights.size(); i++){
            if(weights[i] > maxi){
                maxi=weights[i];
            }
        }
        return maxi;
    }

    int SumOfArray(vector<int>& weights){
        int sum=0;

        for(int i=0; i < weights.size(); i++){
            sum+=weights[i];
        }

        return sum;
    }

    int Finddays(vector<int>& weights , int limit){

        int n= weights.size() ;

        int day=1;
        int load=0;

        for(int i=0; i<n; i++){
            if(load + weights[i] > limit){
                day++;
                load=weights[i];
            }else{
                load+=weights[i];
            }
        }

        return day;

    }


    int shipWithinDays(vector<int>& weights, int days) {

        int low=FindMaximumElement(weights);
        int high=SumOfArray(weights);

        while(low <= high){
            int mid= low+(high-low)/2;

            int NoOfdays = Finddays(weights , mid);

            if(NoOfdays <= days){

                high=mid-1;

            }else{

                low=mid+1;


            }
        }
      return low;

        
    }
};