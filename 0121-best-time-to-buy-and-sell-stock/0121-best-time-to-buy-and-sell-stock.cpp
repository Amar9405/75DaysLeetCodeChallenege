class Solution {
public:
    int maxProfit(vector<int>& prices) {

         int n=prices.size();

        int BestBuy=prices[0];
        int maxProfit=0;

        for(int i=1; i<n; i++){
            if(prices[i] > BestBuy){
                maxProfit=max(maxProfit,prices[i]-BestBuy);
            }
            BestBuy=min(BestBuy,prices[i]);
        }

        return maxProfit;
        
    }
};