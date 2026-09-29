#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    long long max_sum = 0;
    for (int i = 0; i < n; ++i)
    {
        long long x;
        cin >> x;
        max_sum += abs(x);
    }

    cout << max_sum << "\n";
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