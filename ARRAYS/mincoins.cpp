#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    long long c;
    cin >> n >> c;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int max_k = 0;
    for (int k = 1; k <= n; ++k)
    {
        bool possible = true;
        for (int j = 0; j < k; ++j)
        {
            long long power_of_two = 1LL << (k - 1 - j);
            if (a[j] > c / power_of_two)
            {
                possible = false;
                break;
            }
        }
        if (possible)
        {
            max_k = k;
        }
    }

    cout << n - max_k << "\n";
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