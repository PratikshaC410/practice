#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        if (m == 1 || k >= n - 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}