#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int even_a = 0, odd_a = 0;
    int even_b = 0, odd_b = 0;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] == '1')
        {
            if (i % 2 == 0)
                even_a++;
            else
                odd_a++;
        }
        if (b[i] == '1')
        {
            if (i % 2 == 0)
                even_b++;
            else
                odd_b++;
        }
    }

    if (even_a == even_b && odd_a == odd_b)
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