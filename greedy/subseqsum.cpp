#include <iostream>

using namespace std;

void solve()
{
    long long n, m, p, q;
    cin >> n >> m >> p >> q;

    if (n % p == 0)
    {
        if (m * p == n * q)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
    {
        cout << "YES\n";
    }
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
