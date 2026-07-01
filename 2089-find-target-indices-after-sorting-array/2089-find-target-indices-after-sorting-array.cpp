class Solution {
public:
    int FirstOccurrence(vector<int>& nums, int target, int n) {
        int low = 0, high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans = mid;
                high = mid - 1;   // Search on left side
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    int LastOccurrence(vector<int>& nums, int target, int n) {
        int low = 0, high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans = mid;
                low = mid + 1;    // Search on right side
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    vector<int> targetIndices(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        int first = FirstOccurrence(nums, target, n);

        if (first == -1)
            return {};

        int last = LastOccurrence(nums, target, n);

        vector<int> ans;

        for (int i = first; i <= last; i++) {
            ans.push_back(i);
        }

        return ans;
    }
};