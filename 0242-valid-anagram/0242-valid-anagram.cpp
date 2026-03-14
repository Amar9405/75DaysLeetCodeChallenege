class Solution {
public:
    bool isAnagram(string s, string t) {

     unordered_map<char,int> mp;
     unordered_map<char,int> mpp;
     int n=s.size();
     int n2=t.size();

     if(n!=n2) return false;

     for(int i=0; i < n; i++){   //O(n) 
        mp[s[i]]++;
     }

     for(int i=0; i < n2; i++){   //O(m)  
        mpp[t[i]]++;
     }

     return mp==mpp;  //0(26)->O(1)

    }
};