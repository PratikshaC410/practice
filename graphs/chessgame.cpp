#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string enemy, gregor;
        cin >> enemy >> gregor;

        int ans = 0;

        for (int i = 0; i < n; i++)
        {

            if (gregor[i] == '0')
                continue;

            if (enemy[i] == '0')
            {
                ans++;
                enemy[i] = '2';
            }

            else if (i > 0 && enemy[i - 1] == '1')
            {
                ans++;
                enemy[i - 1] = '0';
            }

            else if (i + 1 < n && enemy[i + 1] == '1')
            {
                ans++;
                enemy[i + 1] = '0';
            }
        }

        cout << ans << "\n";
    }

    return 0;
}