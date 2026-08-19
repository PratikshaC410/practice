#include <iostream>
#include <vector>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i += 2)
    {
        cout << (i + 1) << " " << i << (i + 1 == n ? "" : " ");
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