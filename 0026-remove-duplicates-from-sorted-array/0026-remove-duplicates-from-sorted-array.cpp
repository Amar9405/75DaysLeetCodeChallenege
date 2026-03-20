class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
//    set<int> ss; // O(n log n )
//    int n=nums.size();
//    for(int i=0; i<n; i++){
//         ss.insert(nums[i]); 
//    }
//    int index=0;
//    for(auto st :ss){ //O(n)
//       nums[index]=st;
//       index++;
//    }
//       return index; 

//space complexity = O(n) for storing unique element 
//time complexity = O(n log n)+ O(n);

   int n=nums.size();
   int i=0;
   for(int j=i+1; j<n; j++){
       if(nums[j]!=nums[i]){
         nums[i+1]=nums[j];
         i++;
       }
   }

   return i+1;

   // time complexity of this program is O(n) and sp=O(1).


    }
};