#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int zeros = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 0) {
            zeros++;
        }
    }

    if (zeros < 2) {
        cout << -1 << "\n";
        return;
    }

    int ans = 0;
    if (a[0] == 1) ans++;
    if (a[n - 1] == 1) ans++;

    cout << ans << "\n";
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}