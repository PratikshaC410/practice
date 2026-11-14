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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            if (i == 0 || a[i] != a[i - 1])
            {
                ans.push_back(a[i]);
            }
        }

        int mx = a[n - 1];

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == mx)
            {
                cnt++;
            }
        }

        if (cnt > 1)
        {
            ans.push_back(mx);
        }

        cout << ans.size() << "\n";

        for (int x : ans)
        {
            cout << x << " ";
        }

        cout << "\n";
    }

    return 0;
}