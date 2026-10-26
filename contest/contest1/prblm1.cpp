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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int p = n - k + 1;
        int mex = 0;
        int mx = 0;
        vector<int> seen(n + 2, 0);

        for (int i = 0; i < p; i++)
        {
            seen[a[i]] = 1;
            if (a[i] > a[mx])
                mx = i;
        }

        while (seen[mex])
            mex++;

        if (mex == p)
        {
            cout << -1 << "\n";
            continue;
        }

        int j = 0;
        for (int i = 0; i < n; i++)
            if (a[i] == mex)
                j = i;

        cout << mx + 1 << " " << j + 1 << "\n";
    }
    return 0;
}
