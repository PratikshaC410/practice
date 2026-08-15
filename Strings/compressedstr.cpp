#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int base_length = 1;
    for (int i = 0; i < n - 1; ++i)
    {
        if (s[i] != s[i + 1])
        {
            base_length++;
        }
    }
    int min_change = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        int old_contrib = (s[i - 1] != s[i]) + (s[i] != s[i + 1]);
        int new_contrib = (s[i - 1] != s[i + 1]);
        int change = new_contrib - old_contrib;

        min_change = min(min_change, change);
    }

    cout << base_length + min_change << "\n";
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