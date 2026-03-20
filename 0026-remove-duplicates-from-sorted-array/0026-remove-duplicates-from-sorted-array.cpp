class Solution {
public:
    int removeDuplicates(vector<int>& nums) {


   set<int> ss;
   int n=nums.size();

   for(int i=0; i<n; i++){
        ss.insert(nums[i]); 
   }
   int index=0;

   for(auto st :ss){
      nums[index]=st;
      index++;
   }

   return index;

        
    }
};