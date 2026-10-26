#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string a, b;
        cin >> n >> a >> b;

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'f')
                cnt++;
            if (b[i] == 'f')
                cnt++;
        }

        cout << cnt % 2 << "\n";
    }
    return 0;
}
