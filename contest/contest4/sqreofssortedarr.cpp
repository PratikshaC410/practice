#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> res(nums.size());
        int l = 0, r = nums.size() - 1;

        int i = nums.size() - 1;
        while (l <= r)
        {
            int l_square = nums[l] * nums[l];
            int r_square = nums[r] * nums[r];
            if (r_square > l_square)
            {
                res[i] = r_square;
                r--;
            }
            else
            {
                res[i] = l_square;
                l++;
            }
            i--;
        }
        return res;
    }
};