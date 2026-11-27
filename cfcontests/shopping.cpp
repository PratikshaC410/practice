
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

        vector<long long> x(n), y(n);

        for (int i = 0; i < n; i++)
            cin >> x[i];

        for (int i = 0; i < n; i++)
            cin >> y[i];

        long long dp0 = 0, dp1 = 0;

        for (int i = n - 1; i >= 0; i--)
        {

            long long newDp0 = max(x[i] - y[i] + dp0, dp1);

            long long newDp1 = min(y[i] - x[i] + dp1, dp0);

            dp0 = newDp0;
            dp1 = newDp1;
        }

        if (dp0 > 0)
            cout << "Sunny\n";
        else if (dp0 < 0)
            cout << "Aubrey\n";
        else
            cout << "Draw\n";
    }

    return 0;
}
