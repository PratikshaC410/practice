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
        vector<int> rem;

        for (int i = 0; i < n; i++)
        {
            if (i == 0 || a[i] != a[i - 1])
            {
                ans.push_back(a[i]);
            }
            else
            {
                rem.push_back(a[i]);
            }
        }

        reverse(rem.begin(), rem.end());

        for (int x : rem)
        {
            ans.push_back(x);
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