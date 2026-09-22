class Solution {
public:
    string minWindow(string s, string t) {

        int n=s.size();
        int m=t.size();

        int hash[256]={0};

        for(char ch:t){
            hash[ch]++;
        }


        int left=0;
        int right=0;

        int sIndex=-1;
        int minLength=INT_MAX;
        int count=0;

        while(right < n){

            if(hash[s[right]] > 0){
                count++;
            }
            hash[s[right]]--;

            while(count==m){

                if(right-left+1 < minLength){
                    minLength=right-left+1 ;
                    sIndex=left;
                }


                hash[s[left]]++;


                if(hash[s[left]] > 0){
                    count--;
                }
                left++;

            }

            right++;

        }


        if(sIndex==-1){
            return "";
        }else{
            return s.substr(sIndex,minLength);
        }   
        
    }
};