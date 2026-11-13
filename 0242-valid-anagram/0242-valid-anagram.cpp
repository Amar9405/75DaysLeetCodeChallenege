class Solution {
public:
    bool isAnagram(string s, string t) {

        int n=s.size();
        int n2=t.size();

        if(n != n2 ) return false;

        unordered_map<char,int> mp;
        unordered_map<char,int> mpp;

        


        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }

        for(int i=0; i<n2; i++){
            mpp[t[i]]++;
        }


        return mp==mpp;



        
        
    }
};