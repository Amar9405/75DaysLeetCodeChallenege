class Solution {
public:
    
    // vector<int> prefixsum(vector<int>& height , int n){
    //      vector<int> prefixsum(n);
    //      prefixsum[0]=height[0];

    //      for(int i=1; i<n; i++){
    //         prefixsum[i]=max(prefixsum[i-1], height[i]);
    //      }

    //     return prefixsum;
    // }

    // vector<int> suffixsum(vector<int>& height , int n){
    //     vector<int> suffixsum(n);
    //     suffixsum[n-1]=height[n-1];

    //     for(int i=n-2; i>=0; i--){

    //         suffixsum[i]=max(suffixsum[i+1],height[i]);

    //     }

    //     return suffixsum;

    // }



    

    int trap(vector<int>& height) {

        int n=height.size();

        int leftmax=0;
        int rightmax=0;

        int total=0;

        int left=0;
        int right=n-1;


        while(left < right){

            if(height[left] <= height[right]){

                if(leftmax > height[left] ){
                    total+=leftmax- height[left];
                }else{
                    leftmax=height[left];
                }

                left++;

            }else{
                if(rightmax >  height[right]){
                    total+=rightmax-height[right];
                }else{
                    rightmax=height[right];
                }
                right--;
            }
        }


        return total;

        
    }
};