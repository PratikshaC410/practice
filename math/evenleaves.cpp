#include <iostream>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    long long odd_count = k / 2;
    if (k % 2 != 0 && n % 2 != 0) {
        odd_count++;
    }

    if (odd_count % 2 == 0) {
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