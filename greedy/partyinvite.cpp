
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

        vector<int> p(n);

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        int ans = 3;

        for (int i = 0; i < n; i++)
        {
            if (p[p[i] - 1] == i + 1)
            {
                ans = 2;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
