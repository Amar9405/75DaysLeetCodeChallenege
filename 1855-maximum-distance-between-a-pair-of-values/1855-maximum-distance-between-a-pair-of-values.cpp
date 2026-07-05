class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int maxdistance = 0;

        for(int i = 0; i < n; i++){
            // low ko 'i' se start karenge kyunki condition hai i <= j
            int low = i; 
            int high = m - 1;

            while(low <= high){
                int mid = low + (high - low) / 2;

                // Agar pair valid hai
                if(nums1[i] <= nums2[mid]){
                    int distance = mid - i;
                    maxdistance = max(maxdistance, distance);
                    
                    // Humara pair valid hai, par hume aur maximum distance chahiye.
                    // Isliye hum aur aage (right side) search karenge
                    low = mid + 1; 
                } 
                // Agar pair invalid hai (nums2 ka number chhota pad gaya)
                else {
                    // Bade numbers chahiye, jo ki left side mein milenge 
                    // kyunki array descending (bade se chhota) hai
                    high = mid - 1; 
                }
            }
        }

        return maxdistance;
    }
};