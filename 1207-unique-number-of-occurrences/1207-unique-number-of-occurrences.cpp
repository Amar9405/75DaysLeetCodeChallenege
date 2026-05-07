class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

     unordered_map<int,int> mpp;

     for(auto ele : arr){
        mpp[ele]++;
     }


     unordered_set<int> st;

     for(auto element :  mpp){

        int frq = element.second;

        if( st.find(frq) != st.end() ){
            return false;
        }
        st.insert(frq);
     }


     return true;




    }
};