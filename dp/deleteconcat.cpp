#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    long long c;
    if (!(cin >> n >> c))
        return;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<long long> dp(n + 1, -1e18);
    dp[0] = 0;

    long long max_odd = -1e18;
    long long max_even = -1e18;

    for (int i = 1; i <= n; ++i)
    {
        dp[i] = max(dp[i], dp[i - 1] + a[i - 1] - c);
        if (i >= 2)
        {
            dp[i] = max(dp[i], dp[i - 2] + max(a[i - 1], a[i - 2]) - c);
        }

        if (i >= 1)
        {
            max_odd = max(max_odd, dp[i - 1] + a[i - 1] - c);
            if (i >= 2)
            {
                max_even = max(max_even, dp[i - 2] + max(a[i - 1], a[i - 2]) - c);
            }
        }

        if (i >= 3)
        {
            dp[i] = max(dp[i], max_odd + a[i - 1] - c);
        }

        max_odd = max(max_odd - c, dp[i - 1] + a[i - 1] - c);
    }

    cout << dp[n] << "\n";
}

int main()
{

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}