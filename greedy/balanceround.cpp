#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        for (auto &x : a)
            cin >> x;

        sort(a.begin(), a.end());

        int cnt = 0, bestCnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] <= k)
                cnt++;
            else
                cnt = 0;
            bestCnt = max(bestCnt, cnt);
        }

        cout << n - (bestCnt + 1) << "\n";
    }
    return 0;
}