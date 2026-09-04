#include <iostream>
using namespace std;
class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        vector<int> dp(amount + 2, amount + 2);
        dp[0] = 0;
        for (int i = 1; i <= amount; i++)
        {
            for (int c = 0; c < coins.size(); c++)
            {
                if (i - coins[c] >= 0)
                {
                    dp[i] = min(dp[i], 1 + dp[i - coins[c]]);
                }
            }
        }
        if (dp[amount] > amount)
        {
            return -1;
        }
        else
        {
            return dp[amount];
        }
    }
};