class Solution {
public:
    string getPermutation(int n, int k) {

        // Step 1:
        // Store numbers from 1 to n
        vector<int> nums;

        for(int i = 1; i <= n; i++){
            nums.push_back(i);
        }

        // Step 2:
        // Precompute factorials
        // fact[i] stores i!
        vector<int> fact(n, 1);

        for(int i = 1; i < n; i++){
            fact[i] = fact[i - 1] * i;
        }

        // Step 3:
        // Store answer
        string s = "";

        // Step 4:
        // Convert k to 0-based indexing
        k--;

        // Step 5:
        // Build permutation one digit at a time
        for(int i = n - 1; i >= 0; i--){

            // Find which block of permutations
            // the kth permutation belongs to
            int index = k / fact[i];

            // Pick that number
            s += to_string(nums[index]);

            // Remove used number
            nums.erase(nums.begin() + index);

            // Move to remaining permutations
            k %= fact[i];
        }

        return s;
    }
};