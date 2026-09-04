#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    long long n, f, a, b;
    cin >> n >> f >> a >> b;

    vector<long long> m(n);
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }

    long long prev_time = 0;
    for (int i = 0; i < n; i++)
    {
        long long time_diff = m[i] - prev_time;
        long long cost = min(time_diff * a, b);

        f -= cost;
        if (f <= 0)
        {
            cout << "NO\n";
            return;
        }

        prev_time = m[i];
    }

    cout << "YES\n";
}

int main()
{

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}