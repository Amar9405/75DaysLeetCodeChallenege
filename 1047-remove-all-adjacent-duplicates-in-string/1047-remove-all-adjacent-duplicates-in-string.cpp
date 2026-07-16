class Solution {
public:
    string removeDuplicates(string s) {

        // stack<char> st;

        // for(char ch:s){
        //     if(!st.empty() && ch == st.top()){
        //         st.pop();
        //     }else{
        //         st.push(ch);
        //     }
        // }

        // string ans="";
        // while(!st.empty()){
        //     ans+=st.top();
        //     st.pop();
        // }

        // reverse(ans.begin(), ans.end());

        // return ans;

        string ans="";

        for(char ch : s){

            if(!ans.size()==0 && ch == ans.back()){
                ans.pop_back();
            }else{
                 ans.push_back(ch);
            }
        }

        return ans;
        
    }
};