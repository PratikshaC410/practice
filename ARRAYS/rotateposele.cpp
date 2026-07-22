#include <iostream>
class Solution
{
public:
    vector<int> rotateElements(vector<int> &nums, int k)
    {
        vector<int> pos;
        for (int x : nums)
        {
            if (x >= 0)
                pos.push_back(x);
        }

        int m = pos.size();
        if (m == 0)
            return nums;

        k %= m;

        vector<int> rotated;
        for (int i = 0; i < m; i++)
        {
            rotated.push_back(pos[(i + k) % m]);
        }

        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= 0)
            {
                nums[i] = rotated[j++];
            }
        }

        return nums;
    }
};