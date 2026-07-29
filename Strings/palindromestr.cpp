#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool has0 = false, has1 = false;
    for (char c : s)
    {
        if (c == '0')
            has0 = true;
        if (c == '1')
            has1 = true;
    }

    if (!has0 || !has1)
    {
        cout << 1 << "\n";
        return;
    }
    bool is_sorted = std::is_sorted(s.begin(), s.end());
    bool is_rev_sorted = std::is_sorted(s.rbegin(), s.rend());

    if (is_sorted || is_rev_sorted)
    {
        cout << 2 << "\n";
    }
    else
    {
        cout << 1 << "\n";
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