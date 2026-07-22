#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int k;
    cin >> k;

    int ge_3_count = 0;
    int ge_2_count = 0;

    for (int i = 0; i < k; ++i)
    {
        long long c;
        cin >> c;
        if (c >= 3)
        {
            ge_3_count++;
        }
        if (c >= 2)
        {
            ge_2_count++;
        }
    }
    if (ge_3_count >= 1 || ge_2_count >= 2)
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