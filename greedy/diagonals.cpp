#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    if (k == 0)
    {
        cout << 0 << "\n";
        return;
    }

    vector<int> diag_lengths;
    diag_lengths.push_back(n);
    for (int len = n - 1; len >= 1; len--)
    {
        diag_lengths.push_back(len);
        diag_lengths.push_back(len);
    }

    int ans = 0;
    for (int len : diag_lengths)
    {
        ans++;
        k -= len;
        if (k <= 0)
        {
            break;
        }
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