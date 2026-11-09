#include <iostream>
class Solution
{
    vector<int> curr, ans;
    int mini = INT_MAX;

    void solve(int n, int k, int start)
    {

        if (k == 1)
        {
            if (n >= start)
            {
                curr.push_back(n);

                int diff = curr.back() - curr[0];

                if (diff < mini)
                {
                    mini = diff;
                    ans = curr;
                }

                curr.pop_back();
            }
            return;
        }

        for (int i = start; i <= n / i; i++)
        {

            if (n % i == 0)
            {

                curr.push_back(i);

                solve(n / i, k - 1, i);

                curr.pop_back();
            }
        }
    }

public:
    vector<int> minDifference(int n, int k)
    {
        curr.clear();
        ans.clear();
        mini = INT_MAX;

        solve(n, k, 1);

        return ans;
    }
};
