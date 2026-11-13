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

        for (int i = 0; i < n / 2; i++)
        {
            while (s[i] != s[n - i - 1])
            {
                if (s[i] > s[n - i - 1])
                {
                    char c = s[i];
                    for (int j = 0; j < n; j++)
                    {
                        if (s[j] == c)
                            s[j]--;
                    }
                }
                else
                {
                    char c = s[n - i - 1];
                    for (int j = 0; j < n; j++)
                    {
                        if (s[j] == c)
                            s[j]--;
                    }
                }
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}