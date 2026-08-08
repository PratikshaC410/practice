#include <iostream>

using namespace std;

void solve()
{
    int n;
    long long s;
    cin >> n >> s;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        long long dx, dy, x, y;
        cin >> dx >> dy >> x >> y;

        long long diff = (dx * x - dy * y) % s;
        if (diff < 0)
            diff += s;

        if (diff == 0)
        {
            cnt++;
        }
    }

    cout << cnt << "\n";
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