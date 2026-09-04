#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    long long a, b, c;
    cin >> a >> b >> c;

    long long L = min({a, b, c});

    if (a % L != 0 || b % L != 0 || c % L != 0)
    {
        cout << "NO\n";
        return;
    }

    long long cuts = (a / L - 1) + (b / L - 1) + (c / L - 1);

    if (cuts <= 3)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}
