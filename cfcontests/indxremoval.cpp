#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> a(n), c(n), pref(n + 1), ans(n, 0);

        for (ll &x : a)
            cin >> x;

        for (int i = 0; i < n; i++)
        {
            c[i] = a[i] - k * i;
            pref[i + 1] = pref[i] + c[i];
        }

        ans[0] = ans[n - 1] = 0;

        for (int i = 1; i < n - 1; i++)
        {
            ll limit = c[i - 1] - k;

            int l = i + 1, r = n - 1;
            int last = i;

            while (l <= r)
            {
                int mid = l + (r - l) / 2;

                if (c[mid] > limit)
                {
                    last = mid;
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }

            if (last >= i + 1)
            {
                ll cnt = last - i;

                ll sum = pref[last + 1] - pref[i + 1];

                ans[i] = sum - cnt * limit;
            }
        }

        for (ll x : ans)
            cout << x << ' ';

        cout << '\n';
    }

    return 0;
}