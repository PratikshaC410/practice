#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    long long total_x = 0;
    long long total_y = 0;

    for (int i = 0; i < n; i++)
    {
        long long x, y;
        cin >> x >> y;
        total_x += x;
        total_y += y;
    }

    long long perimeter = 4LL * m + 2LL * (total_x + total_y);
    cout << perimeter << "\n";
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