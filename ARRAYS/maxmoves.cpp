#include <iostream>
class Solution
{
public:
    int maxMoves(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> dp(m, vector<int>(n, 0));

        for (int j = n - 2; j >= 0; j--)
        {
            for (int i = 0; i < m; i++)
            {

                // Upper-right
                if (i > 0 && grid[i - 1][j + 1] > grid[i][j])
                {
                    dp[i][j] = max(dp[i][j], 1 + dp[i - 1][j + 1]);
                }

                // Right
                if (grid[i][j + 1] > grid[i][j])
                {
                    dp[i][j] = max(dp[i][j], 1 + dp[i][j + 1]);
                }

                // Lower-right
                if (i < m - 1 && grid[i + 1][j + 1] > grid[i][j])
                {
                    dp[i][j] = max(dp[i][j], 1 + dp[i + 1][j + 1]);
                }
            }
        }

        int ans = 0;

        for (int i = 0; i < m; i++)
        {
            ans = max(ans, dp[i][0]);
        }

        return ans;
    }
};
