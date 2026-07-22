#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    long long sum_even = 0;
    vector<long long> odds;

    for (int i = 0; i < n; ++i)
    {
        long long val;
        cin >> val;
        if (val % 2 == 0)
        {
            sum_even += val;
        }
        else
        {
            odds.push_back(val);
        }
    }

    if (odds.empty())
    {
        cout << 0 << "\n";
        return;
    }

    sort(odds.rbegin(), odds.rend());

    int k = odds.size();
    int take_odd_count = (k + 1) / 2;

    long long ans = sum_even;
    for (int i = 0; i < take_odd_count; ++i)
    {
        ans += odds[i];
    }

    cout << ans << "\n";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}