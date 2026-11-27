
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        long long p;
        cin >> n >> k >> p;

        vector<long long> a(n);
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        sort(a.begin(), a.end());

        long long ans = sum;
        long long juice = 0;

        for (int i = 0; i < n; i++)
        {
            juice += a[i];

            if ((i + 1) % k == 0)
            {
                long long glasses = (i + 1) / k;

                long long current = glasses * p + sum - juice;

                ans = max(ans, current);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
