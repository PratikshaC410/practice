#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    int screens = (y + 1) / 2;

    int remaining_cells = (screens * 15) - (y * 4);

    if (x > remaining_cells)
    {
        int extra_x = x - remaining_cells;
        screens += (extra_x + 14) / 15;
    }

    cout << screens << "\n";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}