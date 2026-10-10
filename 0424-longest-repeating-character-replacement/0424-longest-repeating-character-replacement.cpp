class Solution {
public:
    int characterReplacement(string s, int k) {

        int n=s.size();

        int left=0;
        int right=0;

        int maxLen=0;
        int maxFeq=0;

        int hash[26]={0};

        while(right < s.size()){

            hash[s[right]-'A']++;

            maxFeq=max(maxFeq,hash[s[right]-'A']);


            //check the currect window is invalid
            if(right - left + 1 - maxFeq > k){

                hash[s[left]-'A']--;

                left++;

            }


            maxLen=max(maxLen , right-left+1);
            right++;


        }

        return maxLen;
        
    }
};