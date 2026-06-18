class Solution {
public:

   void fun(vector<int>& candidates , int index , int target , vector<int>& subsequence, vector<vector<int>>& ans){
        
        //base case:-
        if( target ==0){

            ans.push_back(subsequence);

            return;

        }

        //this condition for when the sum become negative and the no more element remaining .
        if( target < 0 || index < 0){
            return;
        }

        //do not take the currect element.go to the next element .
        fun(candidates,index-1,target,subsequence,ans);

        //take this currect element .
        subsequence.push_back(candidates[index]);

        //This is take call.
        // same element can be used multiple times,
        // we stay at the same index.
        // Reduce the remaining sum.
        fun(candidates, index , target-candidates[index] ,subsequence , ans);

        //bactrack before back we are remove the last element .
        subsequence.pop_back();   

   }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

    vector<vector<int>> ans;

    vector<int> subsequence;

    int index=candidates.size()-1; //start recursion form last index of array.

    fun(candidates , index , target , subsequence , ans);

     return ans;

        
    }
};