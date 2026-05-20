class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        
        // vector<int> barIndex;

        // for(int i=0; i<s.size(); i++){

        //     if(s[i] == '|'){
        //         barIndex.push_back(i);
        //     }
        // }

        
        // vector<int> ans;

        // for(auto it : queries){
        //     int left=it[0];
        //     int right=it[1];

        //     int i = lower_bound(barIndex.begin(), barIndex.end(), left) - barIndex.begin();

        //     int j = upper_bound(barIndex.begin(), barIndex.end(), right) - barIndex.begin() - 1;

        //    if(i >= j){
        //         ans.push_back(0);
        //     }
        //     else{

        //         int plates = (barIndex[j] - barIndex[i]) - (j - i);

        //         ans.push_back(plates);

        //   }
        // }

        // return ans;

        int n=s.size();

        vector<int> leftcandle(n);
        vector<int> rightcandle(n);
        vector<int> prefix(n);


        //nearest candle on right side

        int last=-1;
        for(int i=0; i<n; i++){
            if(s[i]=='|'){
                last=i;
            }

            leftcandle[i] = last;

        }


        last=-1;

        //nearest candle on right side

        for(int i=n-1;  i >= 0; i--){
            
            if(s[i]=='|'){
                last=i;
            }

             rightcandle[i]=last;

        }

        prefix[0]=(s[0]=='*');

        for(int i=1;  i<n; i++){

         prefix[i]= prefix[i-1] + (s[i] == '*');

        }

        vector<int> ans;

       for(auto it : queries){

        int left=rightcandle[it[0]];
        int right=leftcandle[it[1]];
       

        if(left == -1 || right==-1 || left >=  right){
            ans.push_back(0);
        }else{
           
           int plates_between=prefix[right]-prefix[left];
           ans.push_back(plates_between);

        }
            
       }

       return ans;





    }
};