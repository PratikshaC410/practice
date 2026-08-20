#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;

    if (a >= b)
    {
        cout << a << "\n";
    }
    else
    {
        cout << max(0LL, 2 * a - b) << "\n";
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