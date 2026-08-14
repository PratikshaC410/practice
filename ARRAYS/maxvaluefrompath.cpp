#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    if (min(n, m) >= 2 && max(n, m) >= 3)
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}