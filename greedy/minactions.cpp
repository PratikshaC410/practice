#include <iostream>

using namespace std;

void solve()
{
    long long x;
    cin >> x;

    int bit_length = 0;
    long long temp = x;
    while (temp > 0)
    {
        bit_length++;
        temp /= 2;
    }

    cout << 2LL * bit_length + 1 << "\n";
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