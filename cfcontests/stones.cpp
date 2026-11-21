#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, m;
        string s;
        cin >> x >> y >> m >> s;

        vector<vector<char>> dp(105, vector<char>(105, 0));
        dp[x][y] = 1;
        int ans = x + y;

        for (char c : s)
        {
            vector<vector<char>> nd(105, vector<char>(105, 0));
            bool any = false;
            for (int a = 0; a <= 100; a++)
            {
                for (int b = 0; a + b <= 100; b++)
                {
                    if (!dp[a][b] || a + b == 0)
                        continue;
                    if (c == '+')
                    {
                        if (b > 0)
                            nd[a][b + 1] = 1;
                        if (a > 0)
                            nd[a - 1][b + 1] = 1;
                    }
                    else
                    {
                        if (b > 0)
                            nd[a + 1][b - 1] = 1;
                        if (a > 0)
                            nd[a - 1][b] = 1;
                    }
                }
            }
            dp = nd;
            for (int a = 0; a <= 100; a++)
                for (int b = 0; a + b <= 100; b++)
                    if (dp[a][b])
                    {
                        any = true;
                        ans = max(ans, a + b);
                    }
            if (!any)
                break;
        }
        cout << ans << "\n";
    }
    return 0;
}
