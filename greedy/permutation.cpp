#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
long long gcd(long long a, long long b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }

    int g = gcd(x, y);
    bool possible = true;

    for (int i = 1; i <= n; i++)
    {
        if (i % g != p[i] % g)
        {
            possible = false;
            break;
        }
    }

    if (possible)
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
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}