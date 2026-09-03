#include <iostream>

using namespace std;

void solve()
{
    int l, r;
    cin >> l >> r;

    int odd_count = (r + 1) / 2 - l / 2;

    cout << odd_count / 2 << "\n";
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