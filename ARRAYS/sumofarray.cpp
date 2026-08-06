#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }

    vector<long long> a(n);
    long long sum = 0;

    for (int i = 1; i < n; i++)
    {
        a[i - 1] = i;
        sum += i;
    }
    a[n - 1] = sum;
    for (int i = 1; i <= n; i++)
    {
        a[i - 1] = 1LL * i * (i == n ? (1LL * n * (n - 1) / 2) : 1);
    }

    long long multiplier = 1;
    for (int i = 1; i < n; i++)
        multiplier *= i;
    long long S = 1;
    for (int i = 1; i <= n; i++)
    {
    }
}