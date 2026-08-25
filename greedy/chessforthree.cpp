#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;

    int sum = p1 + p2 + p3;

    if (sum % 2 != 0)
    {
        cout << -1 << "\n";
        return;
    }

    cout << min(p1 + p2, sum / 2) << "\n";
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