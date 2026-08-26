#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    long long n;
    int m, q;
    cin >> n >> m >> q;

    long long b1, b2;
    cin >> b1 >> b2;
    if (b1 > b2)
    {
        swap(b1, b2);
    }

    long long a;
    cin >> a;

    if (a < b1)
    {
        cout << b1 - 1 << "\n";
    }
    else if (a > b2)
    {
        cout << n - b2 << "\n";
    }
    else
    {
        cout << (b2 - b1) / 2 << "\n";
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