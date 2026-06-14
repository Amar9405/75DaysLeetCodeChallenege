class Solution {
public:
    
    vector<int> FindPrefixMax(vector<int> &arr, int &n) {
        vector<int> prefixMax(n);

        prefixMax[0] = arr[0];

        for (int i = 1; i < n; i++) {
            prefixMax[i] = max(prefixMax[i - 1], arr[i]);
        }

        return prefixMax;
    }

    vector<int> FindSuffixMax(vector<int> &arr, int &n) {

        vector<int> suffixMax(n);

        suffixMax[n - 1] = arr[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suffixMax[i] = max(suffixMax[i + 1], arr[i]);
        }

        return suffixMax;
    }

   

    int trap(vector<int>& height) {


        int n = height.size();

        int total = 0;  // for store total trapped water.

        vector<int> leftmax = FindPrefixMax(height, n);
        vector<int> rightmax = FindSuffixMax(height, n);

        for (int i = 0; i < n; i++) {
            if (height[i] < leftmax[i] && height[i] < rightmax[i]) {
                total += (min(leftmax[i], rightmax[i]) - height[i]);
            }
        }

        return total;
        
        
    }
};