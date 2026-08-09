#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> p[i];
    }

    vector<int> dp(n + 2, 0);

    for (int i = n; i >= 1; --i)
    {
        int skip = dp[i + 1];
        int sit = 1;
        if (p[i] <= i)
        {
            sit += dp[i + 1];
        }
        else
        {
            sit += (dp[i + 1] - dp[p[i]]);
        }

        dp[i] = max(skip, sit);
    }

    cout << dp[1] << "\n";
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