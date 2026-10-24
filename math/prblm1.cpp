
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int ans = 0;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == ans)
            {
                count++;
                if (count == k)
                {
                    ans++;
                    count = 0;
                }
            }
            else if (a[i] > ans)
            {
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
