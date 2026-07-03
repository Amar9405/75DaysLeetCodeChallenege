class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

        // int n=arr1.size();
        // int n2=arr2.size();

        // int ans=0;

        // for(int i=0; i<n; i++){
        //       bool isValid=true;
        //       for(int j=0; j < n2; j++){
        //         if(abs(arr1[i]-arr2[j]) <= d){
        //             isValid=false;
        //             break;
        //         }
        //       }
        //       if(isValid==true) ans++;
        // }
        // return ans;

        //Binary Search Approach

        int n=arr1.size();
        int m=arr2.size();
        int ans=0;

        sort(arr2.begin(),arr2.end());

        for(int i=0; i<n; i++){
             
             int low=0;
             int high=m-1;
             bool isSafe=true;

             while(low<=high){

                  int mid=low+(high-low)/2;

                  if(abs(arr1[i]-arr2[mid]) <= d){
                     isSafe=false;
                     break;
                  }

                  if(arr2[mid] < arr1[i]){
                    low=mid+1;
                  }else{
                    high=mid-1;
                  }

             }

             if(isSafe){
                ans++;
             }


        }
        

        return ans;


        
    }
};