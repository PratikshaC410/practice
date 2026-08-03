#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    long long n, m, k;
    cin >> n >> m >> k;

    long long rows = min(n, k);
    long long cols = min(m, k);

    long long min_colors = rows * cols;

    cout << min_colors << "\n";
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