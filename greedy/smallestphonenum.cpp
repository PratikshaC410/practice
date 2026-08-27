#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    vector<int> cnt(10, 0);
    for (char c : s)
    {
        cnt[c - '0']++;
    }

    string ans = "";
    for (int i = 0; i < 10; ++i)
    {
        int min_req = 9 - i;
        for (int d = min_req; d <= 9; ++d)
        {
            if (cnt[d] > 0)
            {
                ans += to_string(d);
                cnt[d]--;
                break;
            }
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