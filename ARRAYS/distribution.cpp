#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MOD = 676767677;

signed main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        int sum = 0;
        int lastGreater = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] > 1)
            {
                sum += a[i];
                lastGreater = i;
            }
        }

        if (lastGreater != n - 1)
        {
            sum += 1;
        }

        cout << sum % MOD << '\n';
    }

    return 0;
}
