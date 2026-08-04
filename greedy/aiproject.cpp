#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    long long n, x, y, z;
    cin >> n >> x >> y >> z;

    long long time_without_ai = (n + (x + y) - 1) / (x + y);

    long long time_with_ai;
    long long lines_during_setup = z * x;

    if (lines_during_setup >= n)
    {
        time_with_ai = (n + x - 1) / x;
    }
    else
    {
        long long remaining_lines = n - lines_during_setup;
        long long combined_speed_ai = x + 10 * y;
        long long remaining_time = (remaining_lines + combined_speed_ai - 1) / combined_speed_ai;

        time_with_ai = z + remaining_time;
    }

    cout << min(time_without_ai, time_with_ai) << "\n";
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