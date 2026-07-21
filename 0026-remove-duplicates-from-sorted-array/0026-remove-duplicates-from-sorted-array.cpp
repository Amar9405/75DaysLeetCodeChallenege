class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

    //   unordered_set<int> mpp; //set  data structure used only for the . store the unique element

    //   int n=nums.size();

    //   for(int i=0; i<n; i++){
    //       mpp.insert(nums[i]);
    //   } 

    //   int index=0;
    //   for(auto num : mpp){    
    //     nums[index]=num;
    //     index++;      
    //   }

    //   return index;

    // int n=nums.size();
    
    // int low=0;
    // int high=1;
    // int res=1;

    // while(high < n){

    //      if(nums[high] == nums[high-1]){
    //         high++;
    //         continue;
    //      }

    //      nums[low+1]=nums[high];
    //      low++;
    //      high++;
    //      res++;
    // }

    // return res;

    int n=nums.size();
    int start=0;

    for(int i=1; i<n; i++){
        if(nums[i] != nums[i-1]){
            nums[start+1]=nums[i];
            start++;
        }
    }

    return start+1;

    




        
    }
};