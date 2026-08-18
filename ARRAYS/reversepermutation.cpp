#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> pos(n + 1);
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
        pos[p[i]] = i;
    }

    int l = -1;
    for (int i = 0; i < n; ++i)
    {
        if (p[i] != n - i)
        {
            l = i;
            break;
        }
    }

    if (l != -1)
    {
        int target = n - l;
        int r = pos[target];
        reverse(p.begin() + l, p.begin() + r + 1);
    }

    for (int i = 0; i < n; ++i)
    {
        cout << p[i] << (i + 1 == n ? "" : " ");
    }
    cout << "\n";
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