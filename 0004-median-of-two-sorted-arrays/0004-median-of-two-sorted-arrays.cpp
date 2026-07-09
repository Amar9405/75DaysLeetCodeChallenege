class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
      int n1=arr1.size();
      int n2=arr2.size();

      int n=n1+n2;

      int ind2=n/2;
      int ind1=ind2-1;


      int indel1=-1;
      int indel2=-1;


      int i=0;
      int j=0;
      int cnt=0;


      while(i < n1 && j < n2){

          if(arr1[i] < arr2[j]){
              if(cnt==ind1) indel1=arr1[i];
              if(cnt==ind2)  indel2=arr1[i];
              cnt++;
              i++;
             
          }else{
            if(cnt==ind1) indel1=arr2[j];
            if(cnt==ind2) indel2=arr2[j];
            cnt++;
            j++;
          }

      }

     while(i < n1){
            if(cnt == ind1) indel1 = arr1[i];
            if(cnt == ind2) indel2 = arr1[i];
            cnt++;
            i++;
        }

        while(j < n2){
            if(cnt == ind1) indel1 = arr2[j];
            if(cnt == ind2) indel2 = arr2[j];
            cnt++;
            j++;
        }

      if(n % 2 == 1){
          return (double) indel2;
      }


      return (double)  ((double) (indel1+indel2)) /2.0;

    }
};