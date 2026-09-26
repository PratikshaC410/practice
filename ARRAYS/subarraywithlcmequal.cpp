class Solution
{
public:
    int subarrayLCM(vector<int> &nums, int k)
    {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int curr_lcm = 1;

            for (int j = i; j < nums.size(); j++)
            {

                curr_lcm = (curr_lcm / gcd(curr_lcm, nums[j])) * nums[j];

                if (curr_lcm == k)
                    ans++;

                if (curr_lcm > k)
                    break;
            }
        }

        return ans;
    }
};