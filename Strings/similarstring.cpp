#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;

    vector<int> freq_s(26, 0), freq_t(26, 0);
    for (char c : s)
        freq_s[c - 'a']++;
    for (char c : t)
        freq_t[c - 'a']++;

    for (int i = 0; i < 26; ++i)
    {
        if (freq_t[i] < freq_s[i])
        {
            cout << "Impossible\n";
            return;
        }
    }

    string ans = "";
    ans.reserve(t.length());

    for (char c : s)
    {
        int target = c - 'a';

        for (int i = 0; i < target; ++i)
        {
            while (freq_t[i] > freq_s[i])
            {
                ans += (char)('a' + i);
                freq_t[i]--;
            }
        }

        ans += c;
        freq_t[target]--;
        freq_s[target]--;
    }

    for (int i = 0; i < 26; ++i)
    {
        while (freq_t[i] > 0)
        {
            ans += (char)('a' + i);
            freq_t[i]--;
        }
    }

    cout << ans << "\n";
}

int main()
{

    int T;
    if (cin >> T)
    {
        while (T--)
        {
            solve();
        }
    }
    return 0;
}