#include <iostream>

using namespace std;

void solve()
{
    unsigned long long a, b;
    cin >> a >> b;

    if (a % 2 != 0 && b % 2 != 0)
    {
        unsigned long long P = a * b;
        cout << P + 1 << "\n";
        return;
    }

    int count2 = 0;
    unsigned long long temp_a = a, temp_b = b;
    while (temp_a % 2 == 0)
    {
        temp_a /= 2;
        count2++;
    }
    while (temp_b % 2 == 0)
    {
        temp_b /= 2;
        count2++;
    }

    if (count2 < 2)
    {
        cout << -1 << "\n";
        return;
    }

    if (b % 2 == 0)
    {
        unsigned long long P = a * b;
        cout << (P / 2) + 2 << "\n";
    }
    else
    {
        cout << -1 << "\n";
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