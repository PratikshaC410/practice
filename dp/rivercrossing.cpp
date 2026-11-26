
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        string s;
        cin >> s;

        s = "L" + s + "L";

        vector<int> dp(n + 2, INT_MAX);

        dp[0] = 0;

        for (int i = 0; i <= n; i++)
        {

            if (dp[i] == INT_MAX)
                continue;

            if (s[i] == 'L')
            {

                for (int j = i + 1; j <= min(n + 1, i + m); j++)
                {

                    if (s[j] != 'C')
                    {
                        dp[j] = min(dp[j], dp[i]);
                    }
                }
            }

            else if (s[i] == 'W')
            {

                int j = i + 1;

                if (j <= n + 1 && s[j] != 'C')
                {
                    dp[j] = min(dp[j], dp[i] + 1);
                }
            }
        }

        if (dp[n + 1] <= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
