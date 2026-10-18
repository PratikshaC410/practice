
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        string p = s;
        sort(p.begin(), p.end());

        if (p != s)
        {
            cout << "YES" << endl;
            cout << p << endl;
        }
        else
        {
            reverse(p.begin(), p.end());

            if (p != s)
            {
                cout << "YES" << endl;
                cout << p << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
