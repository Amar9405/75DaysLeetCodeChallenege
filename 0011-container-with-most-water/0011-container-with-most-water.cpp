class Solution {
public:
    int maxArea(vector<int>& height) {
        /*
        int n=height.size();
        int maxwater=0;
        for(int i=0; i<n; i++){//o(n)
            for(int j=i+1; j<n; j++){//o(n)
                int width=j-i;
                int min_height=min(height[i],height[j]);
                int currwater=width*min_height;
                maxwater=max(maxwater,currwater);
            }
        }
        return maxwater; */
     //total_timecomplexity=O(n^2);

     int n=height.size();
     int maxwater=0;

     int left=0;
     int right=n-1;

     while(left < right){
          int min_height=min(height[left],height[right]);
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