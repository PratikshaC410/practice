
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> cnt(m + 1, 0);

        ll total = 0;

        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            cnt[x]++;
            total += x;
        }

        vector<int> suf(m + 2, 0);

        for (int x = m; x >= 1; --x)
        {
            suf[x] = suf[x + 1] + cnt[x];
        }
        int K = 0;
        while ((1LL << K) - 1 < m)
            ++K;

        vector<ll> ans(m + 1);
        for (int k = 1; k < K; ++k)
        {
            int C = 1 << k;

            ll best = 0;

            for (int d = 1; d <= m; ++d)
            {

                ll cur = 0;

                int limit = min(m, (C - 1) * d);

                for (int v = d; v <= limit; v += d)
                {
                    cur += suf[v];
                }

                if (1LL * C * d <= m)
                {
                    cur += cnt[C * d];
                }

                best = max(best, cur);
            }

            ans[k] = best;
        }
        for (int k = K; k <= m; ++k)
        {
            ans[k] = total;
        }

        for (int k = 1; k <= m; ++k)
        {
            cout << ans[k] << (k == m ? '\n' : ' ');
        }
    }

    return 0;
}
