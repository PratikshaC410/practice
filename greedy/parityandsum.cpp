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
        long long mx_odd = -1;
        vector<long long> ev;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            if (x & 1)
                mx_odd = max(mx_odd, x);
            else
                ev.push_back(x);
        }

        if (mx_odd == -1 || ev.empty())
        {
            cout << 0 << "\n";
            continue;
        }

        sort(ev.begin(), ev.end());
        int ans = ev.size();
        for (long long e : ev)
        {
            if (e < mx_odd)
                mx_odd += e;
            else
            {
                ans++;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}