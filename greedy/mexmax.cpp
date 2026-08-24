#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> present;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] != -1)
        {
            present.insert(a[i]);
        }
    }

    if (present.empty())
    {
        cout << "YES\n";
        return;
    }

    if (present.size() == 1)
    {
        int val = *present.begin();
        if (val >= 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
    {
        cout << "NO\n";
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