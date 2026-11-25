#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long s = 0, k = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            s += x;
            if (x == 1)
                k++;
        }
        if (n == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << (s >= n + k ? "YES" : "NO") << "\n";
        }
    }
    return 0;
}
