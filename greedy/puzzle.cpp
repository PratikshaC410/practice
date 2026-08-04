#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve()
{
    int n, c;
    cin >> n >> c;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    long long cost_without_reorder = 0;
    bool possible_without_reorder = true;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] < b[i])
        {
            possible_without_reorder = false;
            break;
        }
        cost_without_reorder += (a[i] - b[i]);
    }

    vector<int> sorted_a = a;
    vector<int> sorted_b = b;
    sort(sorted_a.begin(), sorted_a.end());
    sort(sorted_b.begin(), sorted_b.end());

    long long cost_with_reorder = c;
    bool possible_with_reorder = true;
    for (int i = 0; i < n; ++i)
    {
        if (sorted_a[i] < sorted_b[i])
        {
            possible_with_reorder = false;
            break;
        }
        cost_with_reorder += (sorted_a[i] - sorted_b[i]);
    }

    if (!possible_with_reorder)
    {
        cout << -1 << "\n";
        return;
    }

    if (possible_without_reorder)
    {
        cout << min(cost_without_reorder, cost_with_reorder) << "\n";
    }
    else
    {
        cout << cost_with_reorder << "\n";
    }
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