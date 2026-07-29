#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

long long lcm(long long a, long long b)
{
    if (a == 0 || b == 0)
        return 0;
    return (a / std::gcd(a, b)) * b;
}

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }

    int operations_count = 0;

    for (int i = 0; i < n; ++i)
    {
        long long req_lcm = 1;

        if (i > 0)
        {
            long long g_left = std::gcd(a[i - 1], a[i]);
            req_lcm = lcm(req_lcm, g_left);
        }

        if (i < n - 1)
        {
            long long g_right = std::gcd(a[i], a[i + 1]);
            req_lcm = lcm(req_lcm, g_right);
        }

        if (req_lcm < a[i])
        {
            operations_count++;
        }
    }

    cout << operations_count << "\n";
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