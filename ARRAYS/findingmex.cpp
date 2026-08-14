#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    if (x == n)
    {
        for (int i = 0; i < n; ++i)
        {
            cout << i << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < x; ++i)
    {
        cout << i << " ";
    }

    for (int i = x + 1; i < n; ++i)
    {
        cout << i << " ";
    }

    cout << x << "\n";
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
