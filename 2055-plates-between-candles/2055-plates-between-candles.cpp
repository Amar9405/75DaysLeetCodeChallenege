class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        
        vector<int> barIndex;

        for(int i=0; i<s.size(); i++){

            if(s[i] == '|'){
                barIndex.push_back(i);
            }
        }

        
        vector<int> ans;

        for(auto it : queries){
            int left=it[0];
            int right=it[1];

            int i = lower_bound(barIndex.begin(), barIndex.end(), left) - barIndex.begin();

            int j = upper_bound(barIndex.begin(), barIndex.end(), right) - barIndex.begin() - 1;

           if(i >= j){
                ans.push_back(0);
            }
            else{

                int plates = (barIndex[j] - barIndex[i]) - (j - i);

                ans.push_back(plates);

          }
        }

        return ans;


    }
};