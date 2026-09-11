class Solution {
public:
    
    vector<int> prefixsum(vector<int>& height , int n){
         vector<int> prefixsum(n);
         prefixsum[0]=height[0];

         for(int i=1; i<n; i++){
            prefixsum[i]=max(prefixsum[i-1], height[i]);
         }

        return prefixsum;
    }

    vector<int> suffixsum(vector<int>& height , int n){
        vector<int> suffixsum(n);
        suffixsum[n-1]=height[n-1];

        for(int i=n-2; i>=0; i--){

            suffixsum[i]=max(suffixsum[i+1],height[i]);

        }

        return suffixsum;

    }



    

    int trap(vector<int>& height) {

        int n=height.size();

        vector<int> leftmax= prefixsum(height , n );
        vector<int> rightmax= suffixsum(height , n);

        int total=0;

        for(int i=0; i<n; i++){

            if(height[i] < leftmax[i] && height[i] < rightmax[i]){
                total+=(min(leftmax[i] , rightmax[i])-height[i]);

            }
        }


        return total;  
        
    }
};