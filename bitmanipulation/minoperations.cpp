class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int x = 0;

        for (int num : nums)
        {
            x ^= num;
        }

        int diff = x ^ k;
        int ans = 0;

        while (diff > 0)
        {
            if (diff % 2 == 1)
            {
                ans++;
            }
            diff = diff / 2;
        }

        return ans;
    }
};