#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    long long n, k, m;
    cin >> n >> k >> m;

    if (m < k)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    long long q = m / k;
    long long r = m % k;

    for (int i = 1; i <= n; ++i)
    {
        int rem = i % k;
        if (rem != 0 && rem <= r)
        {
            cout << q + 1 << (i == n ? "" : " ");
        }
        else
        {
            cout << q << (i == n ? "" : " ");
        }
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