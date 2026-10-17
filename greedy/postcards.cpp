
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int cnt = 0;
    int trips = 0;
    char prev = s[0];

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != prev || cnt == 5)
        {
            trips++;
            cnt = 0;
            prev = s[i];
        }

        cnt++;
    }

    if (cnt > 0)
    {
        trips++;
    }

    cout << trips << endl;

    return 0;
}
