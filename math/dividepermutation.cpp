#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> p(n + 1);
    int low = 1, high = n;

    for (int i = n; i >= 1; --i)
    {
        if ((n - i) % 2 == 0)
        {
            p[i] = high--;
        }
        else
        {
            p[i] = low++;
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << p[i] << (i == n ? "" : " ");
    }
    cout << "\n";
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