
class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int i = 0, j = 0;
        int zeros = 0, ans = 0;

        while (j < nums.size())
        {
            if (nums[j] == 0)
            {
                zeros++;
            }

            while (zeros > 1)
            {
                if (nums[i] == 0)
                {
                    zeros--;
                }
                i++;
            }

            ans = max(ans, j - i);
            j++;
        }

        return ans;
    }
};
