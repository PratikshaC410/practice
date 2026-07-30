#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    vector<bool> used(n, false);
    vector<int> p(n);

    for (int i = 0; i < n; ++i)
    {
        int best_j = -1;
        for (int j = 0; j < n; ++j)
        {
            if (!used[j] && b[j] >= a[i])
            {
                best_j = j;
                break;
            }
        }

        if (best_j == -1)
        {
            cout << -1 << "\n";
            return;
        }

        used[best_j] = true;
        p[i] = best_j;
    }

    long long swaps = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (p[i] > p[j])
            {
                swaps++;
            }
        }
    }

    cout << swaps << "\n";
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