#include <iostream>

using namespace std;

void solve()
{
    long long a, b, m;
    cin >> a >> b >> m;

    long long ans = (m / a) + (m / b) + 2;
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