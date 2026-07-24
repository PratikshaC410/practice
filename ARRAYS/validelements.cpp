#include <iostream>
class Solution
{
public:
    vector<int> findValidElements(vector<int> &nums)
    {
        int n = nums.size();

        vector<int> rightMax(n, INT_MIN);
        for (int i = n - 2; i >= 0; i--)
        {
            rightMax[i] = max(rightMax[i + 1], nums[i + 1]);
        }

        vector<int> ans;
        int leftMax = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == n - 1 ||
                nums[i] > leftMax ||
                nums[i] > rightMax[i])
            {
                ans.push_back(nums[i]);
            }

            leftMax = max(leftMax, nums[i]);
        }

        return ans;
    }
};