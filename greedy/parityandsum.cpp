
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);

        long long maxOdd = 0, maxEven = 0;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] % 2 == 0)
            {
                maxEven = max(maxEven, a[i]);
                cnt++;
            }
            else
            {
                maxOdd = max(maxOdd, a[i]);
            }
        }

        if (cnt == 0 || cnt == n)
        {
            cout << 0 << '\n';
            continue;
        }

        int ans = 0;

        while (maxOdd < maxEven)
        {
            maxOdd += maxEven;
            ans++;
        }

        ans += cnt;

        cout << ans << '\n';
    }

    return 0;
}
