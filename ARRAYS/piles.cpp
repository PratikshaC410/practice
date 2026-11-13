#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b && b == c)
        {
            cout << "NO" << endl;
        }
        else if ((b == a + 1 && c == b + 1) ||
                 (a == b + 1 && c == a + 1) ||
                 (a == c + 1 && b == a + 1) ||
                 (a == b + 1 && c == b + 1) ||
                 (b == c + 1 && a == b + 1) ||
                 (c == a + 1 && b == c + 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}