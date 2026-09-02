#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    if ((n1 == 1 && n2 == 2) || (n1 == 2 && n2 == 1))
    {
        cout << 3 << "\n";
    }
    else if ((n1 == 2 && n2 == 3) || (n1 == 3 && n2 == 2))
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 2 << "\n";
    }

    return 0;
}