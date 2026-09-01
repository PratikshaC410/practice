#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    set<int> unique_elements;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        unique_elements.insert(val);
    }

    cout << unique_elements.size() << "\n";
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