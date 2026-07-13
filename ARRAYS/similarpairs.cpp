#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int odds = 0, evens = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            evens++;
        else
            odds++;
    }

    if (odds % 2 == 0)
    {
        cout << "YES\n";
        return;
    }

    //  find at least one pair with a diff of 1
    sort(a.begin(), a.end());
    bool found_diff_one = false;

    for (int i = 0; i < n - 1; ++i)
    {
        if (a[i + 1] - a[i] == 1)
        {
            found_diff_one = true;
            break;
        }
    }

    if (found_diff_one)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}