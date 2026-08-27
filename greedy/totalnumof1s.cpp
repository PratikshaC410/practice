#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << "YES\n";
        return;
    }

    int count_ones_a = 0, count_ones_b = 0;
    int transitions_a = 0, transitions_b = 0;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] == '1')
            count_ones_a++;
        if (b[i] == '1')
            count_ones_b++;
        if (i + 1 < n)
        {
            if (a[i] != a[i + 1])
                transitions_a++;
            if (b[i] != b[i + 1])
                transitions_b++;
        }
    }

    if (count_ones_a == count_ones_b && transitions_a == transitions_b && transitions_a > 0)
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