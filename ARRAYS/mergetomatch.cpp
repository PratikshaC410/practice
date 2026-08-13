#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n), b(m);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        if (n < 2 * m)
        {
            cout << "NO\n";
            continue;
        }

        vector<pair<long long, int>> v;
        v.reserve(n + m);

        for (auto x : a)
            v.push_back({x, 1}); // A
        for (auto x : b)
            v.push_back({x, -1}); // B

        sort(v.begin(), v.end());

        bool ok = true;

        int bal = 0;
        for (size_t i = 0; i < v.size(); i++)
        {
            bal += v[i].second;
            if (bal < 0)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            bal = 0;
            for (int i = (int)v.size() - 1; i >= 0; i--)
            {
                bal += v[i].second;
                if (bal < 0)
                {
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
