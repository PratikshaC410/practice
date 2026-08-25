#include <iostream>
#include <string>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    long long total_cost = 0;
    long long ones = 0;

    for (char c : s)
    {
        if (c == '1')
        {
            ones++;
        }
        else if (ones > 0)
        {
            total_cost += (ones + 1);
        }
    }

    cout << total_cost << "\n";
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