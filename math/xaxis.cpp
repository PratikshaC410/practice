#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int ans = max({x1, x2, x3}) - min({x1, x2, x3});
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