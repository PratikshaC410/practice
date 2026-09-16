#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int minimumAverageDifference(vector<int> &nums)
    {
        int n = nums.size();

        long long total_sum = 0;
        for (int num : nums)
        {
            total_sum += num;
        }

        long long left_sum = 0;
        long long min_diff = LLONG_MAX;
        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            left_sum += nums[i];
            long long right_sum = total_sum - left_sum;

            long long left_avg = left_sum / (i + 1);
            long long right_avg = (n - i - 1 == 0) ? 0 : right_sum / (n - i - 1);

            long long diff = abs(left_avg - right_avg);

            if (diff < min_diff)
            {
                min_diff = diff;
                ans = i;
            }
        }

        return ans;
    }
};