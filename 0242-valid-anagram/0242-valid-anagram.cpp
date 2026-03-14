class Solution {
public:
    bool isAnagram(string s, string t) {

     unordered_map<char,int> mp;
     unordered_map<char,int> mpp;
     int n=s.size();
     int n2=t.size();

     for(int i=0; i < n; i++){    
        mp[s[i]]++;
     }

     for(int i=0; i < n2; i++){    
        mpp[t[i]]++;
     }

     return mp==mpp;

    }
};