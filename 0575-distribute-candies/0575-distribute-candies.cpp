class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        int n=candyType.size();
        unordered_set<int> s;

        for(int x : candyType) s.insert(x);
        int setsize=s.size();

        return min(n/2,setsize);

        


       
    }
};