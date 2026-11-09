#include <iostream>
class Solution
{
public:
    vector<int> findKDistantIndices(vector<int> &nums, int key, int k)
    {
        vector<int> ans;

        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] == key)
            {
                int start = max(0, j - k);
                int end = min((int)nums.size() - 1, j + k);

                for (int i = start; i <= end; i++)
                {
                    if (ans.empty() || ans.back() < i)
                    {
                        ans.push_back(i);
                    }
                }
            }
        }

        return ans;
    }
};