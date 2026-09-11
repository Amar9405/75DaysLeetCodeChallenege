class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n=nums.size();

        if(n < k) return 0;
        
        double maxavg= -1000000000.0;

        double sum=0;

        for(int i=0; i<k ; i++){
            sum+=nums[i];
        }


        maxavg=max(maxavg , sum /(k * 1.0));

        for(int i=k; i<n; i++){
            
            sum+=nums[i];
            sum-=nums[i-k];

            maxavg=max(maxavg, sum /(k * 1.0));

        }

    return maxavg;
           
    }
};