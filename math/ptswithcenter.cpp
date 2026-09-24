#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int xc, yc, k;
        cin >> xc >> yc >> k;

        if (k % 2 == 1)
        {
            cout << xc << " " << yc << "\n";

            for (int i = 1; i <= k / 2; i++)
            {
                cout << xc - i << " " << yc << "\n";
                cout << xc + i << " " << yc << "\n";
            }
        }
        else
        {
            for (int i = 1; i <= k / 2; i++)
            {
                cout << xc - i << " " << yc << "\n";
                cout << xc + i << " " << yc << "\n";
            }
        }
    }

    return 0;
}