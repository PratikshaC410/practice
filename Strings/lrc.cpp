#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int max_val = -1;
    int max_idx = -1;
    bool all_equal = true;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (i > 0 && a[i] != a[0])
        {
            all_equal = false;
        }
        if (a[i] > max_val)
        {
            max_val = a[i];
            max_idx = i;
        }
    }

    if (all_equal)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        for (int i = 0; i < n; ++i)
        {
            if (i == max_idx)
            {
                cout << 1 << (i == n - 1 ? "" : " ");
            }
            else
            {
                cout << 2 << (i == n - 1 ? "" : " ");
            }
        }
        cout << "\n";
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