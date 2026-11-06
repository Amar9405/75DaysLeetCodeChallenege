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

        int n=nums.size();

        if(n==0){
            return 0;
        }

        unordered_set<int> stt;

        for(int i=0; i<n; i++){
            stt.insert(nums[i]);
        }

        int ans=1;

        for(int num : stt){


            if(stt.find(num-1) == stt.end()){

                int curr=num;
                int count=1;

                while(stt.find(curr+1) != stt.end()){

                    curr++;
                    count++;

                }

                ans=max(ans,count);

            }

        }

        return ans;

        

    }
};