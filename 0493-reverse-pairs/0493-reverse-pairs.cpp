class Solution {
public:

    //step 1:-Merge two sorted halves
    void merge(vector<int>& nums, int s, int mid, int e) {

        //step 2;-Create left and right temporary arrays
        vector<int> left(nums.begin() + s, nums.begin() + mid + 1);
        vector<int> right(nums.begin() + mid + 1, nums.begin() + e + 1);

        int i = 0, j = 0, k = s;

        //step 3:- Merge both sorted arrays
        while (i < left.size() && j < right.size()) {

            if (left[i] <= right[j])
                nums[k++] = left[i++];
            else
                nums[k++] = right[j++];
        }

        //step 3;-Copy remaining elements of left array
        while (i < left.size())
            nums[k++] = left[i++];

        //step 4:-Copy remaining elements of right array
        while (j < right.size())
            nums[k++] = right[j++];
    }

    //step5:- Count reverse pairs between two sorted halves
    int countPairs(vector<int>& nums, int s, int mid, int e) {

        int count = 0;

        int j = mid + 1;

        // Traverse left half
        for (int i = s; i <= mid; i++) {

            // Find how many elements in right half satisfy:
            // nums[i] > 2 * nums[j]
            while (j <= e && nums[i] > (long long)2 * nums[j])
                j++;

            // Number of valid pairs for current i
            count += (j - (mid + 1));
        }

        return count;
    }

    // Merge Sort
    int mergeSort(vector<int>& nums, int s, int e) {

        // Base Case: single element
        if (s >= e)
            return 0;

        int mid = s + (e - s) / 2;

        int count = 0;

        // Count pairs in left half
        count += mergeSort(nums, s, mid);

        // Count pairs in right half
        count += mergeSort(nums, mid + 1, e);

        // Count cross pairs
        count += countPairs(nums, s, mid, e);

        // Merge sorted halves
        merge(nums, s, mid, e);

        return count;
    }

    int reversePairs(vector<int>& nums) {

        return mergeSort(nums, 0, nums.size() - 1);
    }
};