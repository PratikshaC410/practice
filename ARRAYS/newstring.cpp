#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int minOpsToForm2026(const string &s)
{
    int n = s.length();
    int min_ops = 4;
    string target = "2026";

    for (int i = 0; i <= n - 4; ++i)
    {
        int ops = 0;
        for (int j = 0; j < 4; ++j)
        {
            if (s[i + j] != target[j])
            {
                ops++;
            }
        }
        min_ops = min(min_ops, ops);
    }
    return min_ops;
}
int remove2025(string &s, int idx)
{
    int n = s.length();

    int found_idx = -1;
    for (int i = idx; i <= n - 4; ++i)
    {
        if (s.substr(i, 4) == "2025")
        {
            found_idx = i;
            break;
        }
    }

    if (found_idx == -1)
        return 0;

    int min_ops = 4;
    const char valid_chars[] = {'0', '2', '5', '6'};

    for (int pos = found_idx; pos < found_idx + 4; ++pos)
    {
        char original = s[pos];
        for (char c : valid_chars)
        {
            if (c != original)
            {
                s[pos] = c;
                min_ops = min(min_ops, 1 + remove2025(s, found_idx));
                s[pos] = original; // backtrack
            }
        }
    }

    return min_ops;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cost1 = minOpsToForm2026(s);
    string s_copy = s;
    int cost2 = remove2025(s_copy, 0);

    cout << min(cost1, cost2) << "\n";
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