class Solution {
public:
   bool isPalidrom(string s , int left , int right ){
        
        while(left <= right ){
            if(s[left] != s[right]){
                return false;
            }

            left++;
            right--;
        }
        return true ;
   }

   void fun(int index , string s ,  vector<string>& palidromsubstr ,   vector<vector<string>>& ans){
      // base case :-when the index reaches the end of the string
      if(index==s.size()){
        //store the curr  palidrom substring into the ans.
        ans.push_back(palidromsubstr);
        return;
      }

      for(int i=index; i<s.size(); i++){
        // Check if the substring s[index..i] is a palindrome
         if(isPalidrom(s,index,i)){
            palidromsubstr.push_back(s.substr(index , i - index + 1));

            //next recursive call 

            fun(i+1 , s , palidromsubstr , ans);

            palidromsubstr.pop_back();

         }
      }    

   }


    vector<vector<string>> partition(string s) {

        vector<vector<string>> ans;

        vector<string> palidromsubstr;

        fun(0 , s , palidromsubstr , ans);

        return ans;


        
    }
};