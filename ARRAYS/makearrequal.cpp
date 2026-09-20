#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<int, int> freq;

        int mx = 0;

        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
            mx = max(mx, freq[a[i]]);
        }

        cout << n - mx << '\n';
    }

    return 0;
}
