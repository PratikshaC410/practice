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

    int first_a = -1;
    int last_b = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            if (first_a == -1)
            {
                first_a = i;
            }
        }
        if (s[i] == 'B')
        {
            last_b = i;
        }
    }

    if (first_a == -1 || last_b == -1 || first_a > last_b)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << last_b - first_a << "\n";
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
