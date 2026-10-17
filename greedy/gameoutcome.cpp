#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[30][30];
    int row[30] = {0}, col[30] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            row[i] += arr[i][j];
            col[j] += arr[i][j];
        }
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (col[j] > row[i])
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}