#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        long long ans = n;

        // x = number of islands to isolate
        for (long long x = 0; x <= n - 1; x++)
        {
            if (x * (n - x) <= k)
            {
                ans = n - x;
            }
        }

        cout << ans << endl;
    }

    return 0;
}