#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> p[i];
    }

    bool possible = true;

    for (int i = 1; i <= n; ++i)
    {
        if (abs(p[i] - i) > 1)
        {
            possible = false;
            break;
        }

        if (p[i] == i + 1)
        {
            if (i + 1 <= n && p[i + 1] == i)
            {
                swap(p[i], p[i + 1]);
                i++;
            }
            else
            {
                possible = false;
                break;
            }
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
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}