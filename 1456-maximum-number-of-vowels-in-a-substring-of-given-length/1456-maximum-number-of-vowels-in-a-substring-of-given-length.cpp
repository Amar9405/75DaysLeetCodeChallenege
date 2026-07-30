class Solution {
public:
   
   bool isVowel(char ch){
         
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u'){
            return true;
        }
        return false;
   }

    int maxVowels(string s, int k) {
    
      int cnt=0;
      int n=s.size();

      for(int i=0; i<k; i++){
         if(isVowel(s[i])) cnt++;
      }

      int maxi=0;

      maxi=max(maxi,cnt);

      for(int i=k; i<n; i++){
          
        if(isVowel(s[i])) cnt++;

        if(isVowel(s[i-k])) cnt--;


        maxi=max(maxi,cnt);
    
      }


      return maxi;




      
        
    }
};