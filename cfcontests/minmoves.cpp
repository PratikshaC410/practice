#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int ans = INT_MAX;
        for (int k = 0; k <= 200; k++)
        {
            int moves = k;
            int p = k + 1;
            int dmg = 0;
            while (dmg < x)
            {
                dmg += p;
                if (p > 1)
                    p--;
                moves++;
            }
            ans = min(ans, moves);
        }
        cout << ans << "\n";
    }
    return 0;
}