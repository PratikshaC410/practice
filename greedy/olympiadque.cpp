#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    long long max_diff = 0;

    for (int i = 0; i < n; i++)
    {
        int net_gain = a[i];
        if (i + 1 < n)
        {
            net_gain -= b[i + 1];
        }

        if (net_gain > 0)
        {
            max_diff += net_gain;
        }
    }

    cout << max_diff << "\n";
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
