class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        vector<int> res = {0, 0};
        long long x = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            x = x ^ nums[i];
        }
        int x1 = x & (-x);
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] & x1)
            {
                res[0] = res[0] ^ nums[i];
            }
            else
            {
                res[1] = res[1] ^ nums[i];
            }
        }
        return res;
    }
};