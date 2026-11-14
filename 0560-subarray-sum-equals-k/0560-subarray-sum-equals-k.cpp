class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n=nums.size();

        unordered_map<int,int> mpp;

        mpp[0]=1;

        int prefixsum=0;

        int count=0;


        for(int i=0; i<n; i++){


            prefixsum+=nums[i];

            int rem= prefixsum - k;


            if(mpp.find(rem) != mpp.end()){

                count+=mpp[rem];


            }

            mpp[prefixsum]++;

            

        }

        return  count;

        
    }
};