#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    long long n, a, b;
    cin >> n >> a >> b;

    if (b <= a)
    {
        cout << n * a << "\n";
        return;
    }

    long long k = min(n, b - a + 1);

    long long promo_profit = k * (2 * b - k + 1) / 2;
    long long regular_profit = (n - k) * a;

    cout << promo_profit + regular_profit << "\n";
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