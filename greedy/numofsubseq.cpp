class Solution
{
public:
    long long numberOfSubsequences(vector<int> &nums)
    {
        int n = nums.size();
        long long ans = 0;

        map<pair<int, int>, long long> mp;

        for (int q = 1; q < n; q++)
        {

            for (int p = 0; p < q - 1; p++)
            {
                int g = gcd(nums[p], nums[q]);

                mp[{nums[p] / g, nums[q] / g}]++;
            }

            for (int r = q + 2; r < n; r++)
            {

                for (int s = r + 2; s < n; s++)
                {
                    int g = gcd(nums[s], nums[r]);

                    pair<int, int> ratio = {
                        nums[s] / g,
                        nums[r] / g};

                    ans += mp[ratio];
                }
            }
        }

        return ans;
    }
};