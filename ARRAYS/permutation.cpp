#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> g(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> g[i][j];
        }
    }

    vector<int> p(2 * n + 1);
    long long total_sum = 1LL * 2 * n * (2 * n + 1) / 2;
    long long current_sum = 0;

    for (int j = 0; j < n; j++)
    {
        p[j + 2] = g[0][j];
        current_sum += p[j + 2];
    }

    for (int i = 1; i < n; i++)
    {
        p[i + n + 1] = g[i][n - 1];
        current_sum += p[i + n + 1];
    }

    p[1] = total_sum - current_sum;

    for (int i = 1; i <= 2 * n; i++)
    {
        cout << p[i] << (i == 2 * n ? "" : " ");
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