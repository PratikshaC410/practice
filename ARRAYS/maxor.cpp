#include <iostream>
class Solution
{
public:
    long long maximumOr(vector<int> &nums, int k)
    {
        int n = nums.size();

        vector<long long> prefix(n, 0), suffix(n, 0);

        prefix[0] = nums[0];

        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] | nums[i];
        }

        suffix[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            suffix[i] = suffix[i + 1] | nums[i];
        }

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            long long left = (i > 0) ? prefix[i - 1] : 0;
            long long right = (i < n - 1) ? suffix[i + 1] : 0;

            long long curr = left | ((long long)nums[i] << k) | right;

            ans = max(ans, curr);
        }

        return ans;
    }
};
