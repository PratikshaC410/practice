#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int minOpsToForm2026(const string &s)
{
    int n = s.length();
    int min_ops = 4;
    string target = "2026";

    for (int i = 0; i <= n - 4; ++i)
    {
        int ops = 0;
        for (int j = 0; j < 4; ++j)
        {
            if (s[i + j] != target[j])
            {
                ops++;
            }
        }
        min_ops = min(min_ops, ops);
    }
    return min_ops;
}

int remove2025_DP(const string &s)
{
    int n = s.length();
    const int INF = 1e9;

    vector<int> dp(4, INF);
    dp[0] = 0;

    string target = "2025";
    char alphabet[] = {'0', '2', '5', '6'};

    for (int i = 0; i < n; ++i)
    {
        vector<int> next_dp(4, INF);
        for (int j = 0; j < 4; ++j)
        {
            if (dp[j] == INF)
                continue;

            for (char c : alphabet)
            {
                int cost = (s[i] == c) ? 0 : 1;

                string cur = target.substr(0, j) + c;
                int next_j = 0;
                for (int k = min(4, (int)cur.length()); k >= 1; --k)
                {
                    if (cur.substr(cur.length() - k) == target.substr(0, k))
                    {
                        next_j = k;
                        break;
                    }
                }

                if (next_j < 4)
                {
                    next_dp[next_j] = min(next_dp[next_j], dp[j] + cost);
                }
            }
        }
        dp = next_dp;
    }

    int res = INF;
    for (int j = 0; j < 4; ++j)
    {
        res = min(res, dp[j]);
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cost1 = minOpsToForm2026(s);
    int cost2 = remove2025_DP(s);

    cout << min(cost1, cost2) << "\n";
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