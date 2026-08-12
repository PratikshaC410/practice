#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    bool has_step_one = false;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        if (a == 100)
        {
            has_step_one = true;
        }
    }

    if (has_step_one)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}

int main()
{

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }

    return 0;
}