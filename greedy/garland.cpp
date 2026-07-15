#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> pref(n, 0);
    for (int i = 0; i < n - 1; i++)
    {
        pref[i + 1] = pref[i] + (s[i] == s[i + 1] ? 1 : 0);
    }

    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        l--;
        r--;

        int bad_pairs = 0;
        if (l < r)
        {
            bad_pairs = pref[r] - pref[l];
        }

        int min_ops = (bad_pairs + 1) / 2;

        if (min_ops <= k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
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