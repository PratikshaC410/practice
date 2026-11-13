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
        char color = 'R';

        for (int i = 0; i < n; i++)
        {
            if (s[i] != color)
            {
                cnt++;
                color = s[i];
            }

            if (color == 'R')
                color = 'B';
            else
                color = 'R';
        }

        cout << cnt << endl;
    }

    return 0;
}