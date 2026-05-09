class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        
        int n=nums.size();
        if(n%k) return false;

        unordered_map<int,int> mpp;

        int g=n/k;

        for(int i=0;  i<n; i++){
            mpp[nums[i]]++;
            if (mpp[nums[i]] > g) return false;
        }

        return true;

        
        
        
    
    }
};