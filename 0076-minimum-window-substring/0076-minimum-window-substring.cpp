class Solution {
public:
    string minWindow(string s, string t) {

        int n=s.size();
        int m=t.size();


        int left=0;
        int right=0;

        int minLen=INT_MAX;
        int stIndex=-1;

        int count=0;

        int hash[256]={0};

        for(char ch : t){
            hash[ch]++;
        }

        while(right < n){

            if(hash[s[right]] > 0){
                count++;
            }

            hash[s[right]]--;

            while(count==m){
                
                if(right-left + 1 < minLen){
                    minLen=right-left + 1;
                    stIndex=left;
                }

                hash[s[left]]++;

                if(hash[s[left]] > 0){
                    count--;
                }

                left++;

            }

            right++;

        }

       if(stIndex==-1){
          return "";
       }else{
          return s.substr(stIndex , minLen);
       }



       
        
    }
};