class Solution {
public:

   void fun(int index , int sum , vector<int>& candidates , vector<int>& uniqueseq ,  vector<vector<int>>& ans){
         //base case 

         if(sum==0){
             ans.push_back(uniqueseq);
             return;
         }

         //base case 2:

         if(sum < 0 || index == candidates.size()){
             return;
         }

         //take it 
         uniqueseq.push_back(candidates[index]);

         fun(index + 1 ,sum-candidates[index] , candidates , uniqueseq , ans);

         //not take it 
         uniqueseq.pop_back();

         //if i dont take I need to  skip the dublicate 
         //becuase I need unique combination.

         for(int i=index; i< candidates.size(); i++){
            if( i > index && candidates[i] != candidates[index]){
                fun(i, sum , candidates , uniqueseq , ans);
                break;   
            }
         }      

   }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        //step 1:- sort the given candidates becuse we need to unique combination

        sort(candidates.begin(),candidates.end());

        vector<vector<int>> ans;

        vector<int> uniqueseq;

        fun(0, target, candidates , uniqueseq , ans);


        return ans;

        
    }
};