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

        int pos = -1;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                if (i > 0 && s[i - 1] == '1')
                {
                    pos = i;
                    break;
                }
            }
        }

        if (pos == -1)
        {
            pos = s.find('0');
        }

        s.erase(pos, 1);

        pos = s.find('1');
        s.erase(pos, 1);

        cout << s << endl;
    }

    return 0;
}