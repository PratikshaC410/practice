#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        long long mn = 2e18;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            mn = min(mn, x);
        }

        if (mn < n)
            cout << n << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}