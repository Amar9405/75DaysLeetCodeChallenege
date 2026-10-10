class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        // int n=fruits.size();


        // int maxLen=INT_MIN;

        // for(int i=0; i<n; i++){

        //       set<int> st;

        //       for(int j=i; j<n; j++){
        //         st.insert(fruits[j]);
        //         if(st.size() <= 2){
        //             maxLen=max(maxLen , j-i+1);
        //         }else{
        //             break;
        //         }
        //       }
        // }

        // return maxLen;

        int n=fruits.size();
        
        int left=0;
        int right=0;

        int maxLen=INT_MIN;

        unordered_map<int,int> mpp;

        while(right < n){
            mpp[fruits[right]]++;

            if(mpp.size() > 2){
                mpp[fruits[left]]--;
                
                if(mpp[fruits[left]] == 0){
                    mpp.erase(fruits[left]);
                }

                left++;

            }

            if(mpp.size() <= 2){
                maxLen=max(maxLen,right-left+1);
            }


            right++;


        }

        return maxLen;


        
    }
};