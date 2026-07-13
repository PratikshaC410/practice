#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int m = n - 2;
    vector<int> b(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }

    //  impossible pattern 1 0 1
    for (int i = 0; i < m - 2; ++i)
    {
        if (b[i] == 1 && b[i + 1] == 0 && b[i + 2] == 1)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}