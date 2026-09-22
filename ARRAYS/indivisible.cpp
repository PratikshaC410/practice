#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << "\n";
        return;
    }

    if (n % 2 != 0) {
        cout << -1 << "\n";
        return;
    }
    for (int i = 1; i <= n; i += 2) {
        cout << i + 1 << " " << i << (i + 1 == n ? "" : " ");
    }
    cout << "\n";
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
