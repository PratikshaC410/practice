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

        int z = 0, o = 0, t = 0;

        for (char c : s)
        {
            if (c == '0')
                z++;
            else if (c == '1')
                o++;
            else
                t++;
        }

        string ans;

        for (int i = 1; i <= n; i++)
        {
            int low = max(z, k - (n - i));
            int high = min(z + t, i - 1);

            if (low > high)
            {
                ans += '-';
            }
            else if (i > z + t && i <= n - (k - z))
            {
                ans += '+';
            }
            else
            {
                ans += '?';
            }
        }

        cout << ans << '\n';
    }
}
