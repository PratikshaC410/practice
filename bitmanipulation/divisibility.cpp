#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    long long n, d;
    cin >> n >> d;

    vector<int> ans;
    ans.push_back(1);

    if (n >= 3 || d % 3 == 0)
    {
        ans.push_back(3);
    }

    if (d == 5)
    {
        ans.push_back(5);
    }

    if (n >= 3 || d == 7)
    {
        ans.push_back(7);
    }

    if (n >= 6 || (n >= 3 && d % 3 == 0) || d == 9)
    {
        ans.push_back(9);
    }

    for (int i = 0; i < (int)ans.size(); ++i)
    {
        cout << ans[i] << (i + 1 == (int)ans.size() ? "" : " ");
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