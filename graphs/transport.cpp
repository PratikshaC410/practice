#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    if (!(cin >> n >> t))
        return 0;
    vector<int> a(n);
    for (int i = 1; i <= n - 1; ++i)
    {
        cin >> a[i];
    }

    int current_cell = 1;
    while (current_cell < t)
    {
        current_cell += a[current_cell];
    }
    if (current_cell == t)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}