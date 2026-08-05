#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int count_neg = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            count_neg++;
        }
    }

    if (n % 2 != 0)
    {
        cout << "NO\n";
        return;
    }

    if (count_neg % 2 == (n / 2) % 2)
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
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}