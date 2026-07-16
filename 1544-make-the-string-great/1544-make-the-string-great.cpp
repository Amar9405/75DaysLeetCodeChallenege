class Solution {
public:
    string makeGood(string s) {

        stack<int> st;
        string ans="";
        for(char ch : s){    
               if(!st.empty() && abs(st.top()-ch)==32){
                   st.pop();
               }else{
                   st.push(ch);
               }
        }

        while(!st.empty()){
             ans.push_back(st.top());
             st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
        
    }
};