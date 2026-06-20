class Solution {
public:
   
   void fun(vector<int>& nums ,  vector<vector<int>>& ans , int index ){
     
         //base case 
         if(index >=nums.size()){
            ans.push_back(nums);
            return;
         }
    
         //Logic
         for(int i=index; i < nums.size(); i++){
             swap(nums[index],nums[i]);
             fun(nums,ans,index+1);
             //backtrack
             swap(nums[index],nums[i]);

         }

   }


    vector<vector<int>> permute(vector<int>& nums) {

         vector<vector<int>> ans;

         int index=0;

         fun(nums,ans,index);

         return ans;

         
        
    }
};