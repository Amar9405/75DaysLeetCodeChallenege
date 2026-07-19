class Solution {
public:
 
   vector<int> previousSmaller(vector<int>& arr) {

    int n = arr.size();
    vector<int> left(n);
    stack<int> st;

    for (int i = 0; i < n; i++) {

        while (!st.empty() && arr[st.top()] > arr[i]) {
            st.pop();
        }

        if (st.empty())
            left[i] = i + 1;
        else
            left[i] = i - st.top();

        st.push(i);
    }

    return left;
}


   vector<int> nextSmaller(vector<int>& arr) {

    int n = arr.size();
    vector<int> right(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {

        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }

        if (st.empty())
            right[i] = n - i;
        else
            right[i] = st.top() - i;

        st.push(i);
    }

            return right;
    }
    


    int sumSubarrayMins(vector<int>& arr) {
        //Bruete fource approach to solve this problem


        // int n=arr.size();

        // cout<<n<<endl;

        // int sum=0 , mod= (int) (1e9+7);

        // for(int i=0; i<n; i++){

        //     int mini=arr[i];

        //     for(int j=i; j < n; j++){
        //         mini=min(mini , arr[j]);
        //         sum= (sum+mini) % mod;
        //     }
        // }

        // return sum;

        //  1 <= 30000 <= 30000 
        // 1 <= 30000 <=  30000

    const int MOD = 1e9 + 7;

    vector<int> left = previousSmaller(arr);
    vector<int> right = nextSmaller(arr);

    long long ans = 0;

    for (int i = 0; i < arr.size(); i++) {
        ans = (ans + 1LL * arr[i] * left[i] * right[i]) % MOD;
    }

    return ans; 



    }
};