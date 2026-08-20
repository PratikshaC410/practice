#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ones = 0;
    int zero_blocks = 0;
    bool in_zero_block = false;

    for (char c : s)
    {
        if (c == '1')
        {
            ones++;
            in_zero_block = false;
        }
        else
        {
            if (!in_zero_block)
            {
                zero_blocks++;
                in_zero_block = true;
            }
        }
    }

    if (ones > zero_blocks)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
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
