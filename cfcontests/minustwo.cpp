#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int odd_cnt = 0;
    int mod0_cnt = 0;
    int mod2_cnt = 0;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (x % 2 != 0)
        {
            odd_cnt++;
        }
        else
        {
            if (x % 4 == 0)
            {
                mod0_cnt++;
            }
            else
            {
                mod2_cnt++;
            }
        }
    }

    cout << max({odd_cnt, mod0_cnt, mod2_cnt}) << "\n";
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
