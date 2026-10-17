
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    sort(h.begin(), h.end());

    int ans = h[n - a] - h[n - a - 1];

    cout << max(0, ans) << endl;

    return 0;
}
