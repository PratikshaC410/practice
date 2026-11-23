
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

        string s;
        cin >> s;

        int cnt = 0;
        int first = -1, second = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cnt++;

                if (first == -1)
                    first = i;
                else
                    second = i;
            }
        }

        if (cnt % 2 != 0)
            cout << "NO\n";
        else if (cnt == 2 && second - first == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}
