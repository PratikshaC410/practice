#include <iostream>
#include <vector>
using namespace std void solve()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }

    if (n == 2)
    {
        cout << -1 << "\n";
        return;
    }

    vector<long long> a(n);
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    long long current = 3;
    for (int i = 3; i < n; ++i)
    {
        current *= 2;
        a[i] = current;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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