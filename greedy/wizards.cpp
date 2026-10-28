
#include <iostream>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    int required = (n * y + 99) / 100;
    int clones = required - x;

    if (clones < 0)
    {
        clones = 0;
    }

    cout << clones;

    return 0;
}
