class Solution {
public:
    int maxProfit(vector<int>& nums) {

        int n=nums.size();


        int maxprofit=0;
        int bestbuy= nums[0];


        for(int i=1; i<n; i++){

            if(nums[i] > bestbuy){
                  maxprofit=max(maxprofit ,nums[i]-bestbuy);
            }

            bestbuy=min(bestbuy, nums[i]);
        }

        return maxprofit;
 
        
    }
};