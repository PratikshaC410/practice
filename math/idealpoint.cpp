#include <iostream>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    bool has_l = false;
    bool has_r = false;
    
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        if (l == k) has_l = true;
        if (r == k) has_r = true;
    }
    
    if (has_l && has_r) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}