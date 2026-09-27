class Solution
{
public:
    vector<int> closestDivisors(int num)
    {

        int a = num + 1;
        int b = num + 2;

        vector<int> ans;

        for (int i = sqrt(a); i >= 1; i--)
        {
            if (a % i == 0)
            {
                ans = {i, a / i};
                break;
            }
        }

        for (int i = sqrt(b); i >= 1; i--)
        {
            if (b % i == 0)
            {
                if (ans.empty() ||
                    abs(ans[0] - ans[1]) > abs(i - b / i))
                {
                    ans = {i, b / i};
                }
                break;
            }
        }

        return ans;
    }
};