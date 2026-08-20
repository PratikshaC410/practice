#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 1)
    {
        if (s[0] == '1')
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        return;
    }

    bool possible = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (i + 1 < n && s[i + 1] == '1')
            {
                possible = true;
                break;
            }
            if (i + 2 < n && s[i + 2] == '1')
            {
                possible = true;
                break;
            }
        }
    }

    if (possible)
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
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}