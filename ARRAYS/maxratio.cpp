
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cin >> n;

    int a[50], b[50];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;

    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    int cnt = 0;
    int curr_max = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (b[j] % a[i] == 0)
            {

                int ratio = b[j] / a[i];

                if (ratio > curr_max)
                {
                    curr_max = ratio;
                    cnt = 1;
                }
                else if (ratio == curr_max)
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
