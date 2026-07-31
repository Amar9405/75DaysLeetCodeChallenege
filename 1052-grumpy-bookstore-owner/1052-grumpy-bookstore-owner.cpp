class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int n=customers.size();
        int base=0;

        for(int i=0; i<n; i++){
            if(grumpy[i] == 0){
                base+=customers[i];
            }

        }

        int extra=0;
        int maxextra=0;

        for(int i=0; i<n; i++){

            if(grumpy[i] == 1){
                extra+=customers[i];
            }


            if(i >= minutes && grumpy[i-minutes]==1){
                extra-=customers[i-minutes];
            }

           maxextra=max(maxextra,extra);

        }

        return base+maxextra;
        
    }
};