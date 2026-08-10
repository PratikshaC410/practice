#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    long long c;
    cin >> n >> c;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<long long> dp(n + 1, -1e18);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i)
    {
        dp[i] = max(dp[i], dp[i - 1] + a[i - 1] - c);
        if (i >= 2)
        {
            long long max_two = max(a[i - 1], a[i - 2]);
            dp[i] = max(dp[i], dp[i - 2] + max_two - c);
        }

        if (i >= 3)
        {
            long long max_three = max({a[i - 1], a[i - 2], a[i - 3]});
            dp[i] = max(dp[i], dp[i - 3] + max_three - 2 * c);
        }
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