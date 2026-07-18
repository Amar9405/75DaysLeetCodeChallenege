class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {

        int n=ast.size();

        vector<int> st;


        for(int i=0; i<n ; i++){

            //if the element is positive just push the element 
            if(ast[i] > 0) st.push_back(ast[i]);
            else{

                while(!st.empty() && st.back() > 0 && st.back() < abs(ast[i])){
                    st.pop_back();
                }

                if(!st.empty() && st.back() == abs(ast[i])){
                    st.pop_back();
                }
                else if(st.empty() || st.back() < 0 ){
                    st.push_back(ast[i]);
                }
            }
        }

        return st;


        
    }
};