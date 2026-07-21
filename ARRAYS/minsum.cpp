class Solution
{
public:
    int minimumSum(vector<int> &nums)
    {
        int n = nums.size();
        int min_sum = INT_MAX;

        for (int p = 0; p < n; p++)
        {
            for (int q = p + 1; q < n; q++)
            {
                for (int r = q + 1; r < n; r++)
                {
                    if (nums[p] < nums[q] && nums[r] < nums[q])
                    {
                        min_sum = min(min_sum,
                                      nums[p] + nums[q] + nums[r]);
                    }
                }
            }
        }

        return min_sum == INT_MAX ? -1 : min_sum;
    }
};