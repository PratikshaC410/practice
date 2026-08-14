#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    bool dp[2] = {false, false};
    dp[a[1]] = true;

    for (int i = 2; i <= n - 1; ++i)
    {
        bool next_dp[2] = {false, false};
        for (int prev = 0; prev <= 1; ++prev)
        {
            if (!dp[prev])
                continue;
            for (int cur = 0; cur <= 1; ++cur)
            {
                bool is_zero_wins = (prev == 1 && cur == 0);
                if (a[i] == 0 && is_zero_wins)
                {
                    next_dp[cur] = true;
                }
                else if (a[i] == 1 && !is_zero_wins)
                {
                    next_dp[cur] = true;
                }
            }
        }
        dp[0] = next_dp[0];
        dp[1] = next_dp[1];
    }

    bool possible = false;
    for (int last = 0; last <= 1; ++last)
    {
        if (dp[last] && (1 - last == a[n]))
        {
            possible = true;
            break;
        }
    }

    if (possible)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
