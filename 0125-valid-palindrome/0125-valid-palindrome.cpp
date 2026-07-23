class Solution {
public:
   bool isAlpha(char ch){

      if( ch >= '0' && ch <= '9' || tolower(ch) >= 'a' && tolower(ch) <= 'z'){
          return true;
      }
      return false;        
   }


    bool isPalindrome(string s) {
        int n=s.size();
        if(n==1) return true;
        int left=0;
        int right=n-1;
        while(left  < right){
            if(!isAlpha(s[left])){
                left++;
                continue;
            }
            if(!isAlpha(s[right])){
                right--;
                continue;
            }
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        
        return true;
        
    }
};