class Solution {
public:

    int FindMin(vector<int>& bloomDay){
        int min=INT_MAX;

        for(int i=0; i<bloomDay.size(); i++){

            if(bloomDay[i] < min){
                min=bloomDay[i];
            }
        }
        return min;
    }

    int FindMax(vector<int>& bloomDay){
        int max=INT_MIN;

        for(int i=0; i<bloomDay.size(); i++){

            if(bloomDay[i] > max){
                max=bloomDay[i];
            }
        }
        return max;
    }

    bool IsPossible(vector<int>& bloomDay, int m, int k ,int mid){
          
          int cnt=0;
          int totalBouquets=0;

          for(int i=0; i<bloomDay.size(); i++){
               
               if(bloomDay[i] <= mid){
                  cnt++;
               }else{
                  totalBouquets+=((cnt/k));
                  cnt=0;
               } 
          }

           totalBouquets+=((cnt/k));


           return totalBouquets >= m; 
          
    }
   


    int minDays(vector<int>& bloomDay, int m, int k) {


        int n=bloomDay.size();


        int low=FindMin(bloomDay);
        int high=FindMax(bloomDay);

        int ans=-1;

        while(low <= high){

             int mid=low+(high-low)/2;

             if(IsPossible(bloomDay , m , k , mid)){

                ans=mid;
                high=mid-1;

             }else{

                low=mid+1;

             }

        }
        return ans;
        
    }
};