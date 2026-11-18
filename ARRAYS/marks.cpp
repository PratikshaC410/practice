
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> students(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> students[i][j];
        }
    }

    vector<bool> visited(n, false);
    int cnt = 0;

    for (int i = 0; i < m; i++)
    {

        int col_max = 0;

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
