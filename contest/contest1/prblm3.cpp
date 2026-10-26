#include <iostream>
using namespace std;

long long a[200005];
int n, x;

bool check(long long k)
{
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        bool alone = true;

        if (i > 0 && a[i] - a[i - 1] <= k)
            alone = false;

        if (i < n - 1 && a[i + 1] - a[i] <= k)
            alone = false;

        if (alone)
        {
            cnt++;

            if (i + 1 < n && a[i + 1] - a[i] <= 2 * k)
                i++;
        }
    }

    return cnt <= x;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cin >> n >> x;

        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long lo = 1, hi = 1000000000;

        while (lo < hi)
        {
            long long mid = (lo + hi) / 2;

            if (check(mid))
                hi = mid;
            else
                lo = mid + 1;
        }

        cout << lo << '\n';
    }

    return 0;
}
