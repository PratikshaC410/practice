#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        int n;
        cin >> n;

        int ones = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1)
                ones++;
        }

        if (2 * ones >= n)
            cout << "Bessie\n";
        else
            cout << "Elsie\n";
    }
};

int main() {

    int t;
    cin >> t;

    Solution s;

    while (t--) {
        s.solve();
    }

    return 0;
}