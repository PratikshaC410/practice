
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string least_diverse2;
        cin >> least_diverse2;

        int zero = 0, one = 0;

        for (int i = 0; i < n; i++)
        {
            if (least_diverse2[i] == '0')
                zero++;
            else
                one++;
        }

        int mn = min(zero, one);

        mn = max(0, mn - k);

        int mx = n - mn;

        long long ans = 1LL + (1LL * mn * (mn + 1)) / 2 + (1LL * mx * (mx + 1)) / 2;

        cout << ans << endl;
    }

    return 0;
}
