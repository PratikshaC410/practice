#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 1) {
            cout << -1 << endl;
            continue;
        }

        for (int i = 1; i <= n; i += 2) {
            cout << i + 1 << " " << i << " ";
        }

        cout << endl;
    }

    return 0;
}