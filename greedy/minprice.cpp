
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, n, m;
        cin >> a >> b;
        cin >> n >> m;

        long long ans;

        if (a < b)
        {
            long long groups = n / (m + 1);
            long long remaining = n % (m + 1);

            ans = (groups * m + remaining) * a;
        }
        else
        {
            long long groups = n / (m + 1);
            long long remaining = n % (m + 1);

            ans = min(n * b,
                      groups * m * a + remaining * b);
        }

        cout << ans << '\n';
    }

    return 0;
}
