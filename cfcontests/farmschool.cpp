#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int ans = 0;
    int num_farms = n / k;

    for (int farm = 0; farm < num_farms; farm++)
    {
        bool has_zero = false;
        for (int i = 0; i < k; i++)
        {
            if (s[farm * k + i] == '0')
            {
                has_zero = true;
                break;
            }
        }
        if (!has_zero)
        {
            ans++;
        }
    }

    cout << ans << "\n";
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