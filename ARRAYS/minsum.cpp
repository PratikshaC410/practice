#include <iostream>
class Solution
{
public:
    int minimumSum(vector<int> &nums)
    {
        int n = nums.size();

        vector<int> left(n), right(n);

        left[0] = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            left[i] = min(left[i - 1], nums[i - 1]);
        }

        right[n - 1] = INT_MAX;
        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = min(right[i + 1], nums[i + 1]);
        }

        int ans = INT_MAX;

        for (int j = 1; j < n - 1; j++)
        {
            if (left[j] < nums[j] && right[j] < nums[j])
            {
                ans = min(ans, left[j] + nums[j] + right[j]);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};