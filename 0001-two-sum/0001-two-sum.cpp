class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        

        unordered_map<int, int> mpp;
        int n=nums.size();


        for (int i=0;  i<n; i++){
             
             int sum=nums[i];

             int moreneed = target-sum;

             if(mpp.find(moreneed)!= mpp.end()){
                return {i , mpp[moreneed]} ;
             }

             mpp[sum] = i ;
        }

        return {-1,-1};
 
    
    }
};