class Solution {
public:
    int countGoodSubstrings(string s) {

        char a=s[0];
        char b=s[1];
        char c=s[2];

        int cnt=0;

        if(a != b && b != c && c != a) cnt++;

        for(int i=3; i<s.size(); i++){

            a=b;
            b=c;
            c=s[i];

            if(a != b && b != c && c != a) cnt++;

        }


        return cnt;   
        
    }
};