
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

        int max_val = INT_MIN;
        int min_val = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            max_val = max(max_val, max(a[i], b[i]));
            min_val = min(min_val, min(a[i], b[i]));
        }

        int last_max = max(a[n - 1], b[n - 1]);
        int last_min = min(a[n - 1], b[n - 1]);

        if (last_max == max_val && last_min == min_val)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
