#include <iostream>

using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long k = 1;
    long long temp = n;

    for (long long d = 2; d * d <= temp; ++d)
    {
        if (temp % d == 0)
        {
            k *= d;
            while (temp % d == 0)
            {
                temp /= d;
            }
        }
    }
    if (temp > 1)
    {
        k *= temp;
    }

    cout << k << "\n";
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