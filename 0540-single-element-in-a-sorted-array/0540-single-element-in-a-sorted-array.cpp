class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        //First Approach using XOR
        int ans=0;

        for(int i=0; i<nums.size(); i++){
            ans^=nums[i];
        }

        return ans;
        
    }
};