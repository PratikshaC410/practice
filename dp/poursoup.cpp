#include <iostream>
class Solution
{
public:
    vector<vector<double>> dp;

    double solve(int a, int b)
    {
        if (a <= 0 && b <= 0)
            return 0.5;
        if (a <= 0)
            return 1.0;
        if (b <= 0)
            return 0.0;

        if (dp[a][b] != -1)
            return dp[a][b];

        return dp[a][b] =
                   0.25 * (solve(a - 4, b) +
                           solve(a - 3, b - 1) +
                           solve(a - 2, b - 2) +
                           solve(a - 1, b - 3));
    }
    double soupServings(int n)
    {
        if (n >= 4800)
            return 1.0;

        int m = (n + 24) / 25;

        dp.assign(m + 1, vector<double>(m + 1, -1));

        return solve(m, m);
    }
};