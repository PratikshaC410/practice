#include <iostream>
#include <vector>

using namespace std;

long long get_gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << a[0] << "\n";
    }
    else
    {
        cout << get_gcd(a[0], a[n - 1]) << "\n";
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
