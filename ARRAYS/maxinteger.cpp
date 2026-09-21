#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int min_adj_max = 2e9 + 7;
    for (int i = 0; i < n - 1; ++i) {
        min_adj_max = min(min_adj_max, max(a[i], a[i + 1]));
    }

    cout << min_adj_max - 1 << "\n";
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}