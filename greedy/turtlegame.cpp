
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long l, r;
        cin >> l >> r;

        int ans = 0;
        long long x = 1;

        while (x <= r / 2)
        {
            x *= 2;
            if (x >= l)
            {
                ans = 0;
                long long temp = x;

                while (temp > 1)
                {
                    temp /= 2;
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
