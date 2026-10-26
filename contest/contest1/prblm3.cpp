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

        long long low = 1, high = 1000000000;

        while (low < high)
        {
            long long mid = (low + high) / 2;

            if (check(mid))
                high = mid;
            else
                low = mid + 1;
        }

        cout << low << '\n';
    }

    return 0;
}
