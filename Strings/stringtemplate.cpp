#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

const int INF = 2e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    while (m--)
    {
        string s;
        cin >> s;

        if (s.length() != n)
        {
            cout << "NO\n";
            continue;
        }

        map<int, char> num_to_char;
        vector<int> char_to_num(26, INF);
        bool ok = true;

        for (int i = 0; i < n; ++i)
        {
            int num = a[i];
            char ch = s[i];
            int ch_idx = ch - 'a';

            if (num_to_char.count(num))
            {
                if (num_to_char[num] != ch)
                {
                    ok = false;
                    break;
                }
            }
            else
            {
                num_to_char[num] = ch;
            }

            if (char_to_num[ch_idx] != INF)
            {
                if (char_to_num[ch_idx] != num)
                {
                    ok = false;
                    break;
                }
            }
            else
            {
                char_to_num[ch_idx] = num;
            }
        }

        if (ok)
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

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}