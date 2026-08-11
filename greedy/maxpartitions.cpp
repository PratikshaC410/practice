#include <iostream>
#include <algorithm>

using namespace std;

long long calc(long long k, long long a, long long b, long long x, long long y)
{
    long long count = 0;
    if (k >= a)
    {
        long long c1 = (k - a) / x + 1;
        count += c1;
        k -= c1 * x;
    }
    if (k >= b)
    {
        long long c2 = (k - b) / y + 1;
        count += c2;
    }
    return count;
}

void solve()
{
    long long k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;
    long long ans1 = calc(k, a, b, x, y);
    long long ans2 = calc(k, b, a, y, x);

    cout << max(ans1, ans2) << "\n";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
