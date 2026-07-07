class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;

        vector<int> mergedarray;
    

        while(i < n && j < n2){
            if(nums1[i] < nums2[j]){
                  mergedarray.push_back(nums1[i]);
                  i++;
            }else{
                mergedarray.push_back(nums2[j]);
                j++;
            }
        }
        
        //remaining element of array 1
        while(i < n )  mergedarray.push_back(nums1[i++]);
        //remaining element of array 2
        while(j < n2)  mergedarray.push_back(nums2[j++]);

        int mergesize=n+n2;

        if(mergesize % 2 == 1){
            int mid=mergesize/2;
            return mergedarray[mid];
        }
        
    
       return (double) ((double)(mergedarray[mergesize/2]) + (double)(mergedarray[mergesize/2-1])) / 2.0;
        

    }
};