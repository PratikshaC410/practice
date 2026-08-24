#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    if (n == 2)
    {
        cout << a[1] - a[0] << "\n";
        return;
    }

    long long ans = a[n - 1] - a[n - 2];
    for (int i = 0; i < n - 2; ++i)
    {
        ans += a[i];
    }

    cout << ans << "\n";
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