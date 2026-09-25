#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
    }

    int ans = min(n, 2);
    for (int i = 0; i < n; ++i)
    {
        cout << ans << (i + 1 == n ? "" : " ");
    }
    cout << "\n";
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