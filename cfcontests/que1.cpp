#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <cctype>

using namespace std;

void solve()
{
    int n, m;
    if (!(cin >> n >> m))
        return;

    unordered_set<char> available_starts;
    for (int i = 0; i < n; i++)
    {
        string w;
        cin >> w;
        available_starts.insert(w[0]);
    }

    vector<string> abbr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> abbr[i];
    }

    vector<bool> formed(m, false);
    int formed_cnt = 0;
    bool flag = true;

    while (flag)
    {
        flag = false;
        for (int i = 0; i < m; i++)
        {
            if (formed[i])
                continue;

            bool can_make = true;
            for (char ch : abbr[i])
            {
                char ab = tolower(ch);
                if (available_starts.find(ab) == available_starts.end())
                {
                    can_make = false;
                    break;
                }
            }

            if (can_make)
            {
                formed[i] = true;
                formed_cnt++;
                flag = true;

                char new_start = tolower(abbr[i][0]);
                available_starts.insert(new_start);
            }
        }
    }

    if (formed_cnt == m)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}