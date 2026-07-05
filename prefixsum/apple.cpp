#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt100 = 0, cnt200 = 0;
    for (int i = 0; i < n; i++)
    {
        int w;
        cin >> w;
        if (w == 100)
            cnt100++;
        else
            cnt200++;
    }

    int totalUnits = cnt100 + 2 * cnt200;

    if (totalUnits % 2)
    {
        cout << "NO";
        return 0;
    }

    int half = totalUnits / 2;

    for (int x = 0; x <= cnt200; x++)
    {
        int y = half - 2 * x;
        if (0 <= y && y <= cnt100)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}