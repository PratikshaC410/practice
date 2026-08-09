#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (2 * k > n)
    {
        cout << -1 << "\n";
        return;
    }
    vector<int> prefL(n + 1, 0), prefR(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        prefL[i + 1] = prefL[i] + (s[i] == 'L');
        prefR[i + 1] = prefR[i] + (s[i] == 'R');
    }

    int min_flips = n + 1;

    for (int p = k; p <= n - k; ++p)
    {
        int left_flips = prefL[p];

        int right_flips = prefR[n] - prefR[p];

        min_flips = min(min_flips, left_flips + right_flips);
    }

    cout << min_flips << "\n";
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