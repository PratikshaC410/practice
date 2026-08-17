#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }

    long long bea_mountain = a[0] + n;
    long long ver_mountain = b[0] + m;

    if (bea_mountain >= ver_mountain)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 2 << "\n";
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