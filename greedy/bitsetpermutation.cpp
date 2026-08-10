#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool ok = true;

        int ones = 0;
        for (char c : s)
            ones += (c == '1');

        int cur = 0;
        for (int r = 0; r < n; r++)
        {
            if (s[r] == '1')
                cur++;

            if (r >= k && s[r - k] == '1')
                cur--;

            if (r >= k - 1 && cur == k)
            {
                ok = false;
                break;
            }
        }

        if (!ok)
        {
            cout << "NO\n";
            continue;
        }

        vector<int> p(n);

        int small = 1;
        int large = ones + 1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                p[i] = small++;
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                p[i] = large++;
        }

        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            cout << p[i] << (i + 1 == n ? '\n' : ' ');
        }
    }

    return 0;
}
