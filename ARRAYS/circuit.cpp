#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ones = 0;

        for (int i = 0; i < 2 * n; i++) {
            int x;
            cin >> x;

            if (x == 1) {
                ones++;
            }
        }

        int zeros = 2 * n - ones;

        int mini = ones % 2;
        int maxi = min(ones, zeros);

        cout << mini << " " << maxi << "\n";
    }

    return 0;
}
