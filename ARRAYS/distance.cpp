#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int R, x0, y0;
        cin >> R >> x0 >> y0;

        int d = 0;
        bool found = false;

        for (int i = 0; i <= x0 + R && !found; i++)
        {
            for (int j = 0; j <= y0 + R; j++)
            {
                d = (x0 - i) * (x0 - i) + (y0 - j) * (y0 - j);

                if (d == R * R)
                {
                    cout << i << " " << j << endl;
                    found = true;
                    break;
                }
            }
        }

        if (!found)
            cout << "No point found" << endl;
    }

    return 0;
}