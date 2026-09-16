class Solution {
public:
    string minWindow(string s, string t) {

        int minlen=INT_MAX;

        //start index of the substring which have minimum lenght
        int sIndex=-1;

        int n=s.size();
        int m=t.size();

        int hash[256]={0};
        
        //count the frq. of char in t..
        for(int c:t){
            hash[c]++;
        }

        int count=0;

        int left=0;
        int right=0;

        while(right < n){
            
            if(hash[s[right]] >  0){
                count++;
            }
            hash[s[right]]--;

            while(count == m){
                if(right - left + 1 < minlen){
                    minlen= right - left + 1;
                    sIndex =left;
                }
                
                hash[s[left]]++;

                if(hash[s[left]] > 0){
                    count--;
                }
                left++;

            }

            right++;

        }


        return (sIndex == -1) ? "" : s.substr(sIndex,minlen);

        
    }
};