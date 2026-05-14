class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int mod, int k) {

        unordered_map<long long ,long long> mpp;
        long long ans=0;
        long long prefix=0;
        mpp[0]++;
        //size of array 
        int n=nums.size();
        for(int i=0; i<n;  i++){
            if(nums[i] % mod == k){
                prefix++;
            }
            prefix %= mod;
            if(mpp.find((prefix-k+mod)%mod) != mpp.end()){
                ans+=mpp[(prefix-k+mod)% mod];
            }

            mpp[prefix]++;
        }

        return ans;

    }
};