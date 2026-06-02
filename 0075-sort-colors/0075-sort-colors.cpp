class Solution {
public:
    void sortColors(vector<int>& nums) {

        //most optimal solution 
        //using dulch natinal flag Algorithm .

        int n=nums.size();

        int mid=0;
        int low=0;
        int high=n-1;

        // I stop  when mid cross high that is where algorithm end 

        while(mid <= high ){

            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                 low++;
                 mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[high],nums[mid]);
                high--;
            }
        }
        
    }
};