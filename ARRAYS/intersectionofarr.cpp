#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<vector<int>> &nums)
    {
        map<int, int> counts;
        int n = nums.size();
        for (const auto &arr : nums)
        {
            for (int num : arr)
            {
                counts[num]++;
            }
        }

        vector<int> result;
        for (const auto &[num, count] : counts)
        {
            if (count == n)
            {
                result.push_back(num);
            }
        }

        return result;
    }
};