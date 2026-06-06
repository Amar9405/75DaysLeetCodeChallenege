class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

    //     int n=nums.size();
    //     unordered_set<int> st;

        

    //     for(int val : nums){
    //           int frq=0;
    //           for(int num : nums){
    //              if(num == val){
    //                  frq++;
    //              }
    //           }

    //           if(frq > n/3){
    //              st.insert(val);
    //           }
    //     }
     
    //   vector<int> ans(st.begin(),st.end());

    //   return ans;

    //sorting.
    //step1:- Sort the entire array
    sort(nums.begin(),nums.end());


    int n=nums.size();
    unordered_set<int> st;

    //edge case
    if(n==1){
        return {nums[0]};
    }

    if(n==2 && nums[0] != nums[1]){
        return {nums[0],nums[1]};
    }

    int majorityEl=nums[0];
    int freq=1;

    for(int i=1 ; i<n; i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }else{
            freq=1;
            majorityEl=nums[i];
        }

        if(freq > n/3){
            st.insert(majorityEl);
        }
    }

    

    vector<int> ans(st.begin(),st.end());
        
    return ans;    
    }
};