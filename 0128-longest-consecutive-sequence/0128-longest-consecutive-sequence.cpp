class Solution {
public:

//    bool linearsearch(vector<int>&nums , int num){
//         int n=nums.size();

//         for(int i=0; i<n; i++){
//             if(nums[i]== num){
//                 return true;
//             }
//         }
//         return false;
//    }



    int longestConsecutive(vector<int>& nums) {

        // int n=nums.size();
        // int longest=0;

        // if(n==0) return 0;

        // for( int i=0; i<n; i++){
        //     int x=nums[i];
        //     int cnt=1;

        //     while(linearsearch( nums , x+1) == true){
        //          x +=1;
        //         cnt+=1;
        //     }
        //     longest=max(longest,cnt);
        // }
        
        // return longest;

        int n=nums.size();
        if(n==0) return 0;

        sort(nums.begin(),nums.end());

        int lastsmaller=INT_MIN;
        int cnt=0;
        int longest=1;

        for(int i=0; i<n; i++){
            if(nums[i]-1==lastsmaller){
                cnt+=1;
                lastsmaller=nums[i];
            }else if(nums[i] !=  lastsmaller){
                cnt=1;
                lastsmaller=nums[i];
            }
             longest=max(longest ,cnt);

        }
        return longest;
    }
};