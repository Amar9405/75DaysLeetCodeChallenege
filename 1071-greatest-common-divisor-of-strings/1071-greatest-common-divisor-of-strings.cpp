class Solution {
public:
    int gcd(int n1, int n2){
        while(n2 != 0){
            int rem=n1%n2;
            n1=n2;
            n2=rem; 
        }
        return n1;
    }

    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 != str2 + str1){
            return "";
        }else {
            int n1=str1.size();
            int n2=str2.size();
            int ans=gcd(n1,n2);

            return str1.substr(0,ans);

        }
    }
};