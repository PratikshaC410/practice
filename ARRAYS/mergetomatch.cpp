#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < m; ++i)
        cin >> b[i];

    if (n < m)
    {
        cout << "NO\n";
        return;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a[0] >= b[0] || a[n - 1] <= b[m - 1])
    {
        cout << "NO\n";
        return;
    }

    int ptr = 0;
    bool possible = true;

    for (int i = 0; i < m; ++i)
    {
        if (ptr >= n || a[ptr] >= b[i])
        {
            possible = false;
            break;
        }

        while (ptr < n && a[ptr] < b[i])
        {
            ptr++;
        }

        if (ptr >= n)
        {
            possible = false;
            break;
        }
    }

    if (possible)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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