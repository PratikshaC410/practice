#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    unordered_set<int> present;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        present.insert(x);
    }

    int mex = 0;
    while (present.count(mex))
    {
        mex++;
    }

    cout << mex << "\n";
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