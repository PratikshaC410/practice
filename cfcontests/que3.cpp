#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    long long S;
    int q;
    if (!(cin >> S >> q))
        return;
    vector<long long> d;
    for (long long i = 1; i * i <= S; ++i)
    {
        if (S % i == 0)
        {
            d.push_back(i);
            if (i * i != S)
            {
                d.push_back(S / i);
            }
        }
    }
    sort(d.begin(), d.end());
    int k = d.size();

    vector<long long> H(k);
    vector<long long> prefA(k + 1, 0);

    for (int i = 0; i < k; ++i)
    {
        H[i] = S / d[i];
        long long prev_x = (i == 0) ? 0 : d[i - 1];
        long long width = d[i] - prev_x;
        __int128 area = (__int128)width * H[i];
        prefA[i + 1] = prefA[i] + (long long)area;
    }

    while (q--)
    {
        long long x, y;
        cin >> x >> y;

        int p1 = 0;
        int low = 0, high = k - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (H[mid] >= y)
            {
                p1 = mid + 1;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        long long eff_x = min(x, d[k - 1]);

        if (eff_x <= (p1 > 0 ? d[p1 - 1] : 0))
        {
            cout << eff_x * y << "\n";
            continue;
        }

        long long ans = 0;
        long long capped_x = 0;
        if (p1 > 0)
        {
            capped_x = d[p1 - 1];
            ans += capped_x * y;
        }

        int p2 = lower_bound(d.begin(), d.end(), eff_x) - d.begin();

        if (p2 > p1)
        {
            ans += prefA[p2] - prefA[p1];
        }

        if (p2 >= p1 && p2 < k)
        {
            long long step_start = (p2 == 0) ? 0 : d[p2 - 1];
            long long partial_w = eff_x - step_start;
            ans += partial_w * H[p2];
        }

        cout << ans << "\n";
    }
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