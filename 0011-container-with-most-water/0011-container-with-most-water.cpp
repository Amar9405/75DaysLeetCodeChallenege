class Solution {
public:
    int maxArea(vector<int>& height) {

        int n=height.size();
        int left=0;
        int right=n-1;
        int maxwater=INT_MIN;

        while(left < right){

              int min_height=min(height[left] , height[right]);
              int width=right-left;

              int currwater=min_height*width;

              maxwater=max(maxwater,currwater);


              if(height[left] < height[right]){
                       left++;
              }else{
                right--;
              }

        }

        return maxwater;
        
    }
};