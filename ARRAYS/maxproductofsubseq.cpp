#include <iostream>
using namespace std;
class Solution
{
public:
    long long maximumProduct(vector<int> &nums, int m)
    {
        int n = nums.size();

        long long min_left = nums[0];
        long long max_left = nums[0];

        long long max_prod = LLONG_MIN;

        for (int j = m - 1; j < n; ++j)
        {
            int eligible_idx = j - (m - 1);
            min_left = min(min_left, (long long)nums[eligible_idx]);
            max_left = max(max_left, (long long)nums[eligible_idx]);

            long long current_val = nums[j];
            max_prod = max({max_prod, current_val * min_left, current_val * max_left});
        }

        return max_prod;
    }
};