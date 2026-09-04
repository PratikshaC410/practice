#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> ans_b(n + 1);
    for (int i = 0; i < n; i++)
    {
        int b_val;
        cin >> b_val;
        ans_b[a[i]] = b_val;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << (i == n ? "" : " ");
    }
    cout << "\n";

    for (int i = 1; i <= n; i++)
    {
        cout << ans_b[i] << (i == n ? "" : " ");
    }
    cout << "\n";
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