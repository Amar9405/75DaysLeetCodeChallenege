class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // Your code goes here

        int n=nums.size();

        //step 1:- Find the breakpoint where is array decrease in reverse order.

        int breakpoint=-1;
        

        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                breakpoint=i;
                break;
            }

        }

        //edge case :- what if the there is no any breakpoint.if this condition occur that mense that is last permutation . just reverse

        if(breakpoint == -1){
            reverse(nums.begin(),nums.end());
            return;
        } 
        
        //step 2 :- Find the someone greater then breakpoint and smaller then that breakpoint(colsest greater).

        for(int i=n-1; i>=breakpoint+1;i--){
             if(nums[i] > nums[breakpoint]){
                swap(nums[i],nums[breakpoint]);
                break;
             }
        }

        //step 3:reverse the array form breakpoint to n;
        reverse(nums.begin()+breakpoint+1,nums.end());
               
    }
};