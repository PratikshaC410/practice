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

        int i = 0, j = n - 1;
        int cnt = 0;

        while (i < j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                char c = max(s[i], s[j]);

                for (int k = 0; k < n; k++)
                {
                    if (s[k] == c)
                    {
                        s[k]--;
                    }
                }

                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}