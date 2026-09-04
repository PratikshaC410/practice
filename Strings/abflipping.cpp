#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    long long ans = 0;
    long long count_a = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            count_a++;
        }
        else
        {
            if (count_a > 0)
            {
                ans += count_a;
                if (i + 1 < n && s[i + 1] == 'B')
                {
                    count_a = 0;
                }
            }
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