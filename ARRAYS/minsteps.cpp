#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    long long s;
    cin >> n >> s;

    vector<long long> x(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i];
    }

    long long L = min(s, x[0]);
    long long R = max(s, x[n - 1]);

    long long min_steps = (R - L) + min(s - L, R - s);

    cout << min_steps << "\n";
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