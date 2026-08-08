#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    int first_one = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            first_one = i;
            break;
        }
    }

    string T = s.substr(0, first_one) + s.substr(first_one + 1);

    int zero_to_remove = -1;
    bool has_one_after = false;
    int last_one_idx = -1;
    for (int i = 0; i < T.length(); i++)
    {
        if (T[i] == '1')
        {
            last_one_idx = i;
        }
    }

    for (int i = 0; i < T.length(); i++)
    {
        if (T[i] == '0' && i < last_one_idx)
        {
            zero_to_remove = i;
            break;
        }
    }
    if (zero_to_remove == -1)
    {
        for (int i = 0; i < T.length(); i++)
        {
            if (T[i] == '0')
            {
                zero_to_remove = i;
                break;
            }
        }
    }

    string result = T.substr(0, zero_to_remove) + T.substr(zero_to_remove + 1);
    cout << result << "\n";
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