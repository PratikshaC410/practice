class Solution
{
    long long sum_eat(vector<int> &nums, int n)
    {
        long long sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += (nums[i] + (long long)n - 1) / n;
        }

        return sum;
    }

public:
    int minimumRateToEatBananas(vector<int> nums, int h)
    {

        int low = 1;
        int high = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            high = max(high, nums[i]);
        }

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (sum_eat(nums, mid) <= h)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return low;
    }
};