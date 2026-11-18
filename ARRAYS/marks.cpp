
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> students(n);

    for (int i = 0; i < n; i++)
    {
        cin >> students[i];
    }

    vector<bool> visited(n, false);
    int cnt = 0;

    for (int i = 0; i < m; i++)
    {
        char col_max = '0';

        for (int j = 0; j < n; j++)
        {
            if (students[j][i] > col_max)
            {
                col_max = students[j][i];
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (students[j][i] == col_max && !visited[j])
            {
                visited[j] = true;
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
