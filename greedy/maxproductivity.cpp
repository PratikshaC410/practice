#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<int> b(m + 1);
    b[0] = 0; // Boundary base
    for (int i = 1; i <= m; i++)
    {
        cin >> b[i];
    }

    // Sort impact values to process segments from right to left
    sort(b.begin(), b.end());

    // Compute prefix sums to get segment sums quickly
    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }

    // Elements after the largest b[m] can never be flipped
    long long max_productivity = pref[n] - pref[b[m]];

    bool total_flipped = false;

    // Process segments from right to left
    for (int j = m; j >= 1; j--)
    {
        long long segment_sum = pref[b[j]] - pref[b[j - 1]];

        long long current_sum = total_flipped ? -segment_sum : segment_sum;
        long long flipped_sum = -current_sum;

        if (flipped_sum > current_sum)
        {
            max_productivity += flipped_sum;
            total_flipped = !total_flipped; // Toggle flip status for everything to the left
        }
        else
        {
            max_productivity += current_sum;
        }
    }

    cout << max_productivity << "\n";
}

int main()
{
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}