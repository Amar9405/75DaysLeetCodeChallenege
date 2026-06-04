class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        //  int n= nums.size();

        //  sort(nums.begin(),nums.end()); 

        //  int ans=0;

        //  for(int i=0; i<n; i++){
        //      if(nums[i]==nums[i+1]){
        //         ans=nums[i];
        //         break; 
        //      }
        //  }

        //  return ans;

        //optimal apporch ;- Linked list fast and slow pointer appoach

        int slow=nums[0];
        int fast=nums[0];

        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow != fast);

        fast=nums[0];
        while(slow != fast){
            slow=nums[slow];
            fast=nums[fast];
        }


        return slow;
        

        
    }
};