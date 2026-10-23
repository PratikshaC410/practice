
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a <= b)
            cout << -1 << endl;
        else
            cout << min(a / 2, b) << endl;
    }

    return 0;
}
