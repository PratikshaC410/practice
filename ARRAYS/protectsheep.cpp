#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, c;
    if (!(cin >> r >> c))
        return 0;

    vector<string> grid(r);
    for (int i = 0; i < r; ++i)
    {
        cin >> grid[i];
    }

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (grid[i][j] == 'W')
            {
                for (int d = 0; d < 4; ++d)
                {
                    int ni = i + dx[d];
                    int nj = j + dy[d];

                    // Check boundaries
                    if (ni >= 0 && ni < r && nj >= 0 && nj < c)
                    {
                        if (grid[ni][nj] == 'S')
                        {
                            cout << "No\n";
                            return 0;
                        }
                    }
                }
            }
        }
    }

    //  If safe fill all empty spots with dogs
    cout << "Yes\n";
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (grid[i][j] == '.')
            {
                grid[i][j] = 'D';
            }
        }
        cout << grid[i] << "\n";
    }

    return 0;
}