#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    long long a, b, c;
    cin >> a >> b >> c;

    long long mn = min({a, b, c});
    long long mx = max({a, b, c});
    long long other = (a + b + c) - mn - mx;

    long long s = mn + other;

    if (s > mx)
    {
        cout << mx - mn << "\n";
    }
    else
    {
        cout << s - mn << "\n";
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