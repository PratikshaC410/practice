#include <iostream>
#include <algorithm>

using namespace std;

long long count_multiples(long long x, long long l, long long r)
{
    long long first_multiple = ((l + x - 1) / x) * x;
    long long last_multiple = (r / x) * x;

    if (first_multiple > last_multiple)
    {
        return 0;
    }
    return (last_multiple - first_multiple) / x + 1;
}

void solve()
{
    long long l, r, k;
    cin >> l >> r >> k;

    long long low = l, high = r;
    long long max_x = -1;

    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (count_multiples(mid, l, r) >= k)
        {
            max_x = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (max_x == -1)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << max_x - l + 1 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}