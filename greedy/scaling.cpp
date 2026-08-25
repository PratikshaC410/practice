#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<string> grid(n);
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    for (int i = 0; i < n; i += k)
    {
        for (int j = 0; j < n; j += k)
        {
            cout << grid[i][j];
        }
        cout << "\n";
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