#include <iostream>

using namespace std;

void solve()
{
    long long n, a, b;
    cin >> n >> a >> b;

    bool b_same_parity = (n % 2 == b % 2);
    bool a_same_parity = (n % 2 == a % 2);

    if ((b_same_parity && a_same_parity) || (b_same_parity && a <= b))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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