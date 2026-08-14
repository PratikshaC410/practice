#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int min_ops = n - 1;

    for (int l = 0; l < n; ++l)
    {
        for (int r = l; r < n; ++r)
        {
            if ((a[l] % 2) == (a[r] % 2))
            {
                int ops = (l) + (n - 1 - r);
                min_ops = min(min_ops, ops);
            }
        }
    }

    cout << min_ops << "\n";
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