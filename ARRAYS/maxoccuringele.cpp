#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int cnt[101] = {0};

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 100; j >= 1; j--) {
                if (cnt[j] >= i) {
                    cout << j << " ";
                }
            }
        }

        cout << "\n";
    }

    return 0;
}
