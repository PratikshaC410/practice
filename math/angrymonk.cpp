#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    long long n;
    int k;
    cin >> n >> k;

    long long max_val = 0;
    for (int i = 0; i < k; ++i)
    {
        long long a;
        cin >> a;
        max_val = max(max_val, a);
    }

    long long ans = 2 * n - 2 * max_val - k + 1;
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