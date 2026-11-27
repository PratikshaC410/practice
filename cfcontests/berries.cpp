#include <iostream>
using namespace std;

long long mygcd(long long x, long long y)
{
    while (y != 0)
    {
        long long r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, a, b;
        cin >> l >> a >> b;
        long long g1 = mygcd(a, l);
        long long g2 = mygcd(b, l);
        long long L = g1 / mygcd(g1, g2) * g2;
        cout << l / L << "\n";
    }
    return 0;
}
