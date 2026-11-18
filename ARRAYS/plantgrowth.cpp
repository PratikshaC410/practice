
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;

    vector<int> valofa(12);

    for (int i = 0; i < 12; i++)
    {
        cin >> valofa[i];
    }

    if (k == 0)
    {
        cout << 0;
        return 0;
    }

    sort(valofa.begin(), valofa.end(), greater<int>());

    int sum = 0, cnt = 0;

    for (int i = 0; i < 12; i++)
    {
        sum += valofa[i];
        cnt++;

        if (sum >= k)
        {
            break;
        }
    }

    if (sum < k)
    {
        cout << -1;
    }
    else
    {
        cout << cnt;
    }

    return 0;
}
