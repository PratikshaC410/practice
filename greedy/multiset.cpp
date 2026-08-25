#include <iostream>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;

    cout << (n - 1 + k - 2) / (k - 1) << "\n";
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