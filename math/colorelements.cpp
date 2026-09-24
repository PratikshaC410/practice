#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (a[0] == a[n - 1])
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    if (a[0] < a[n - 2])
    {
        string ans(n - 1, 'R');
        ans += 'B';
        cout << ans << "\n";
    }
    else
    {
        string ans = "B";
        ans += string(n - 1, 'R');
        cout << ans << "\n";
    }
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