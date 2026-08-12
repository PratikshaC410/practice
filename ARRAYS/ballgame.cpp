#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n - 1; ++i)
    {
        if (s[i] == 'R' && s[i + 1] == 'L')
        {
            cout << i + 2 << "\n";
            return;
        }
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