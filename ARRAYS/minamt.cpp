#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    long long n, a, b;
    cin >> n >> a >> b;

    long long cost_all_individual = n * a;

    long long full_groups = n / 3;
    long long rem = n % 3;

    long long cost_mixed_exact = full_groups * b + rem * a;

    long long cost_all_groups = ((n + 2) / 3) * b;

    long long ans = min({cost_all_individual, cost_mixed_exact, cost_all_groups});

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