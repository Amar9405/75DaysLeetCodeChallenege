class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n=nums.size();
        if(n < k) return 0;
        double ans = -1000000000.0;
        double sum=0;

        for(int i=0; i<k;  i++){
             sum += nums[i];
        }

        ans= max(ans , sum/(k * 1.0));

        for(int i=k; i<n; i++){

            sum+=nums[i];
            sum-=nums[i-k];

            ans = max(ans,sum/(k*1.0));
        }

        return ans;

        
    }
};