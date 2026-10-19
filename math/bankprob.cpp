#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        if (k == 1)
            cout << (1LL << n) << '\n';
        else if (k == n)
            cout << 2 * n << '\n';
        else
            cout << ((1LL << (n - k + 1)) - 1) * (1LL << k) << '\n';
    }

    return 0;
}