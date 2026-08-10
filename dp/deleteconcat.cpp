#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        long long c;
        cin >> n >> c;

        vector<long long> d(n);
        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;

            ans += a - c;
            d[i] = max(0LL, c - a);
        }

        sort(d.begin(), d.end(), greater<long long>());

        int m = n / 2;
        for (int i = 0; i < m; i++)
        {
            ans += d[i];
        }

        cout << ans << '\n';
    }

    return 0;
}