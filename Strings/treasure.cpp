#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    if (x > y)
    {
        cout << x << "\n";
    }
    else
    {
        if (y - x <= k)
        {
            cout << y << "\n";
        }
        else
        {
            cout << 2 * y - x - k << "\n";
        }
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