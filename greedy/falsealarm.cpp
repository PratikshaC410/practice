#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    int first_closed = -1;
    int last_closed = -1;

    for (int i = 0; i < n; ++i)
    {
        int state;
        cin >> state;
        if (state == 1)
        {
            if (first_closed == -1)
            {
                first_closed = i;
            }
            last_closed = i;
        }
    }

    int required_time = last_closed - first_closed + 1;

    if (required_time <= x)
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
