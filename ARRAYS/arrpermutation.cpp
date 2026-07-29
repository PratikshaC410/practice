#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> p(n);
    vector<int> pos_p(n + 1);
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
        pos_p[p[i]] = i;
    }

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int last_pos = -1;
    for (int i = 0; i < n; ++i)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            continue;
        }

        int current_pos = pos_p[a[i]];

        if (current_pos <= last_pos)
        {
            cout << "NO\n";
            return;
        }

        last_pos = current_pos;
    }

    cout << "YES\n";
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
