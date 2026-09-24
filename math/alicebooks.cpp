#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long max_prefix = 0;
    for (int i = 0; i < n - 1; i++)
    {
        max_prefix = max(max_prefix, a[i]);
    }

    cout << max_prefix + a[n - 1] << "\n";
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