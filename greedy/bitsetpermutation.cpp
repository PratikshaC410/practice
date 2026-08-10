#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int consecutive_ones = 0;
    for (char c : s)
    {
        if (c == '1')
        {
            consecutive_ones++;
            if (consecutive_ones >= k)
            {
                cout << "NO\n";
                return;
            }
        }
        else
        {
            consecutive_ones = 0;
        }
    }

    cout << "YES\n";
    vector<int> p(n);

    int l = 0;
    while (l < n)
    {
        if (s[l] == '0')
        {
            p[l] = l + 1;
            l++;
        }
        else
        {
            int r = l;
            while (r < n && s[r] == '1')
            {
                r++;
            }
            if (r < n)
            {
                for (int i = l; i <= r; ++i)
                {
                    p[i] = (i == r) ? l + 1 : i + 2;
                }
                l = r + 1;
            }
            else
            {
                for (int i = l - 1; i < n; ++i)
                {
                    p[i] = (i == l - 1) ? n : i;
                }
                l = n;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << p[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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
