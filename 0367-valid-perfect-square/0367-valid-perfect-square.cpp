class Solution {
public:
    bool isPerfectSquare(int num) {

        if(num==1) return true;

        int low=0;
        int high=num;

        while(low <= high){
            int mid=low+(high-low)/2;

            if(mid == num / mid &&  num % mid == 0){
                return true;
            }else if( mid  > num / mid){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }

        return false;
        
    }
};