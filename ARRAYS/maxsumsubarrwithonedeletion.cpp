class Solution {
public:
    int maximumSum(vector<int>& arr) {
       int no_del = arr[0];
        int one_del = INT_MIN / 2; 
        int max_sum = arr[0];

        for (size_t i = 1; i < arr.size(); ++i) {
            int prev_no_del = no_del;
            no_del = max(arr[i], no_del + arr[i]);
            one_del = max(prev_no_del, one_del + arr[i]);

            max_sum = max({max_sum, no_del, one_del});
        }

        return max_sum; 
    }
};