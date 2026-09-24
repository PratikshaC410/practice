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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (a[0] == a[n - 1])
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        int pos = 1;

        while (a[pos] == a[0])
            pos++;

        for (int i = 0; i < n; i++)
        {
            if (i == pos)
                cout << "R";
            else
                cout << "B";
        }

        cout << "\n";
    }

    return 0;
}
