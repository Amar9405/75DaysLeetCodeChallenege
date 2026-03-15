class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> ans;//space complexity(O(n)
        int n=nums.size();


        for(int i=0; i<n; i++){//O(n)
            int idx=abs(nums[i])-1;

            if(nums[idx] < 0){
                continue;
             }
                nums[idx]*=-1;
        }

        for(int i=0; i<n; i++){//O(n)
            if(nums[i] >  0){
                ans.push_back(i+1);
            }
        }

        return ans;
      
        //total time complexity is O(n)+O(n)=O(n)
        //space complexity is O(n)
    }
};