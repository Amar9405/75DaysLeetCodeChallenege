class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
       int n=nums.size();

       unordered_set<int> mpp;

       for(int i=0; i<n; i++){
        
           if(mpp.find(nums[i]) != mpp.end()){

              return true;
              
           }

           mpp.insert(nums[i]);



       }

       return false;




        
    }
};