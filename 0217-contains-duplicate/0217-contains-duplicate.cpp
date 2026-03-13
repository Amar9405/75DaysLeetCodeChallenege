class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       

      //Brute force apporoach
        // int n=nums.size();

        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        // sort(nums.begin(),nums.end());//O(n log n)

        // int n=nums.size();

        // for(int i=1; i<n; i++){//o(n)
        //     if(nums[i-1] == nums[i]){
        //         return true;
        //     }
        // }

        // return false;

        //most optimal solution 

        int n=nums.size();
        unordered_set<int> seen;

        for (int i=0;i<n; i++){
              if(seen.find(nums[i])!= seen.end()){                    
                            return true;
                }
            seen.insert(nums[i]);   //time complexity O(n)  space complexity:-O(n)
        }
    return false;       
    }
};