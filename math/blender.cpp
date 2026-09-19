#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long n, x, y;
    cin >> n >> x >> y;

    long long rate = min(x, y);
    long long ans = (n + rate - 1) / rate;

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