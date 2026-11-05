class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string , vector<string>> mpp;


        for(auto &str:strs){

             int frq[26]={0};

             for(char ch : str){

                frq[ch -'a']++;

             }

             string key= "";

             for(int i=0; i<26; i++){
                key += to_string(frq[i]) + "#";
             }

             mpp[key].push_back(str);
        }

         vector<vector<string>> ans;

         for(auto &it : mpp){
            ans.push_back(it.second);
         }

         return ans;


    }
};