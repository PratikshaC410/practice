
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

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int mid = (n - 1) / 2;
        long long ans = 0;

        for (int i = mid; i < n; i++)
        {
            if (a[i] == a[mid])
            {
                ans++;
            }
            else
            {
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
