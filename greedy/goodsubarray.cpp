#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
    }

    int good_count = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int diff = abs(p[i] - p[i + 1]);
        if (diff == gcd(p[i], p[i + 1]))
        {
            good_count++;
        }
    }

    cout << good_count << "\n";
}

int main()
{

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}
