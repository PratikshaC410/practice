#include <bits/stdc++.h>
using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ans = 0;

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;

            if (x != i) {
                ans = findGCD(ans, abs(i - x));
            }
        }

        cout << ans << endl;
    }

    return 0;
}