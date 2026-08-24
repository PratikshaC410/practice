#include <iostream>
#include <vector>
#include <numeric>
#include <map>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    map<long long, int> freq;
    long long total_sum = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        total_sum += a[i];
        freq[a[i]]++;
    }

    int max_freq = 0;
    long long dominant_val = 0;
    for (auto const &[val, count] : freq)
    {
        if (count > max_freq)
        {
            max_freq = count;
            dominant_val = val;
        }
    }

    int other_cards = n - max_freq;
    int usable_dominant = min(max_freq, other_cards + 2);
    int wasted_cards = max_freq - usable_dominant;

    long long max_health = total_sum - (1LL * wasted_cards * dominant_val);
    cout << max_health << "\n";
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