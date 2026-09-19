#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int robin_gold = 0;
    int people_helped = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] >= k) {
            robin_gold += a[i];
        } else if (a[i] == 0 && robin_gold > 0) {
            robin_gold--;
            people_helped++;
        }
    }

    cout << people_helped << "\n";
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}