#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int a = 0;
    int b = 0;
    int c = 0;

    for (char ch : s)
    {
        if (ch == '0')
            a++;
        else if (ch == '1')
            b++;
        else if (ch == '2')
            c++;
    }

    string ans(n, ' ');
    for (int i = 1; i <= n; ++i)
    {
        if (i <= a || i > n - b)
        {
            ans[i - 1] = '-';
        }
        else if (i > a + c && i <= n - b - c)
        {
            ans[i - 1] = '+';
        }
        else
        {
            ans[i - 1] = '?';
        }
    }

    cout << ans << "\n";
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