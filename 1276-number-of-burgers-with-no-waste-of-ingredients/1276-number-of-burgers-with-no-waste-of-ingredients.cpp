class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {


        int totalBurger=cheeseSlices;

        int minBurger=0;
        int maxBurger=cheeseSlices;

        while(minBurger <= maxBurger){

             int jumbo=minBurger+(maxBurger-minBurger)/2;

             int small=totalBurger-jumbo;

             int TotaltomatoSlices= (4 * jumbo) + ( 2 * small);


             if(tomatoSlices == TotaltomatoSlices){
                  return {jumbo,small};
             }

             if(TotaltomatoSlices > tomatoSlices ){
                  maxBurger=jumbo-1;
             }else{
                  minBurger=jumbo+1;
             }

        }


        return {};

        
        
    }
};