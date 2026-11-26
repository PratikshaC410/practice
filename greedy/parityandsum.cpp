
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

        vector<long long> even;

        long long maxOdd = 0;

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            if (x % 2 == 0)
            {
                even.push_back(x);
            }
            else
            {
                maxOdd = max(maxOdd, x);
            }
        }

        if (even.empty() || maxOdd == 0)
        {
            cout << 0 << '\n';
            continue;
        }

        sort(even.begin(), even.end());

        int ans = 0;

        for (long long x : even)
        {

            if (x > maxOdd)
            {
                ans++;
            }

            maxOdd += x;
            ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}
