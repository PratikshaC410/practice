class Solution
{
public:
    long long maximumSubarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        long long sum = 0;
        long long max_sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {

            mp[nums[i]]++;
            sum += nums[i];

            if (i >= k)
            {
                mp[nums[i - k]]--;
                sum -= nums[i - k];

                if (mp[nums[i - k]] == 0)
                {
                    mp.erase(nums[i - k]);
                }
            }

            if (i >= k - 1 && mp.size() == k)
            {
                max_sum = max(max_sum, sum);
            }
        }

        return max_sum;
    }
};