
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int R, x0, y0;
        cin >> x0 >> y0 >> R;

        int d = 0;
        bool found = false;

        for (int i = x0 - R; i <= x0 + R && !found; i++)
        {
            for (int j = y0 - R; j <= y0 + R; j++)
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
    }

    return 0;
}
