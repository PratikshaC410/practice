
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

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        int mx = INT_MIN;
        int mn = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            mx = max(mx, max(a[i], b[i]));
            mn = max(mn, min(a[i], b[i]));
        }

        int lastMax = max(a[n - 1], b[n - 1]);
        int lastMin = min(a[n - 1], b[n - 1]);

        if (lastMax == mx && lastMin == mn)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
