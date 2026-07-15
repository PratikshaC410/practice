#include <iostream>
#include <vector>

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

    long long extra = 0;
    bool possible = true;

    for (int i = 0; i < n - 1; i++)
    {
        long long total_available = a[i] + extra;

        if (total_available < i)
        {
            possible = false;
            break;
        }

        extra = total_available - i;
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
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}