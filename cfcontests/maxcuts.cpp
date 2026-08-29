#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> freq(2 * m + 2, 0);
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        freq[a]++;
    }

    int f1 = 0, f2 = 0;
    for (int v = 1; v <= m; ++v)
    {
        if (freq[v] > f1)
        {
            f2 = f1;
            f1 = freq[v];
        }
        else if (freq[v] > f2)
        {
            f2 = freq[v];
        }
    }

    int ans = f1 + f2;

    vector<int> len_greater_than_x(m + 2, 0);
    for (int x = m; x >= 1; --x)
    {
        len_greater_than_x[x] = len_greater_than_x[x + 1] + freq[x];
    }

    for (int x = 1; x <= m; ++x)
    {
        int current = len_greater_than_x[x] + (2 * x <= m ? freq[2 * x] : 0);
        ans = max(ans, current);
    }

    cout << ans << "\n";
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
