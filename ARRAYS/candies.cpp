#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<int, int> counts;
    int max_count = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int color;
            cin >> color;
            counts[color]++;
            max_count = max(max_count, counts[color]);
        }
    }

    if (n == 1)
    {
        cout << "NO\n";
        return;
    }

    if (max_count <= n * n - n)
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