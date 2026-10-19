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

        cout << ((1LL << (k + 1)) - 2) << '\n';
    }

    return 0;
}